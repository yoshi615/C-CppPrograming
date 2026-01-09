#include <iostream>
#include <string>
class Database {
public:
    static Database& getInstance() {
        static Database instance; 
        return instance;
    }
    void query(std::string sql) {
        std::cout << "SQL実行: " << sql << std::endl;
    }
private:
    // --- 【重要ポイント1】コンストラクタを private にする ---
    Database() {
        std::cout << ">>> 初期化処理：データベースへの接続を確立中..." << std::endl;
    }
    ~Database() {
        std::cout << ">>> クリーンアップ処理：データベース接続を閉じ、リソースを解放中..." << std::endl;
    }
    // --- 【重要ポイント2】コピーと代入を禁止する ---
    Database(const Database&) = delete;
    Database& operator=(const Database&) = delete;
};
int main() {
    std::cout << "プログラム開始..." << std::endl;
    std::cout << "1回目のgetInstance()呼び出し\n";
    Database::getInstance().query("SELECT * FROM users");
    std::cout << "\n2回目のgetInstance()呼び出し\n";
    Database::getInstance().query("UPDATE users SET name='Tom'");

    std::cout << "\nプログラム終了..." << std::endl;
    return 0; 
}