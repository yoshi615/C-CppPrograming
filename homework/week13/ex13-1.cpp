#include <iostream>
#include <string>
#include <map>
class AppConfig
{
private:
    static std::map<std::string, std::string> &instance()
    {
        static std::map<std::string, std::string> cfg;
        return cfg;
    }

public:
    static void set(const std::string &key, const std::string &value)
    {
        auto &cfg = instance();
        cfg[key] = value;
    }
    static std::string get(const std::string &key)
    {
        auto &cfg = instance();
        auto it = cfg.find(key);
        if (it != cfg.end())
        {
            return it->second;
        }
        return "<unset>";
    }
    static void display_settings()
    {
        auto &cfg = instance();
        std::cout << "Settings:" << std::endl;
        for (auto it = cfg.begin(); it != cfg.end(); ++it)
        {
            std::cout << "  " << it->first << ": " << it->second << std::endl;
        }
    }
};

int main()
{
    AppConfig::set("log.level", "INFO");
    AppConfig::set("data.dir", "/mnt/data");
    AppConfig::display_settings();
    AppConfig::set("log.level", "WARN");
    std::cout << "log.level = " << AppConfig::get("log.level") << "\n";
    std::cout << "data.dir  = " << AppConfig::get("data.dir") << "\n";
    std::cout << "timeout   = " << AppConfig::get("timeout") << "\n";
}