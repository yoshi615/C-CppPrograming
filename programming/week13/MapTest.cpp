#include <iostream>
#include <map>
#include <string>

int main()
{
    // string型をキー、int型を値とするmapを生成
    std::map<std::string, int> scores;
    // operator[] を使った挿入
    scores["Alice"] = 90;
    scores["Bob"] = 85;
    // insertを使った挿入
    scores.insert({"Charlie", 92});
    // イテレータを使った走査（キーでソートされている順に出力される）
    std::cout << "全員のスコア:\n";
    for (auto it = scores.begin(); it != scores.end(); ++it)
    {
        // it->first  : キー（ここでは名前）
        // it->second : 値（ここではスコア）
        std::cout << "  " << it->first << ": " << it->second << std::endl;
    }
    // findを使った検索
    std::cout << "スコア検索:" << std::endl;
    auto it = scores.find("Bob");
    if (it != scores.end())
    {
        std::cout << "  Bobのスコア: " << it->second << std::endl;
    }
    // eraseを使った削除
    scores.erase("Alice");
    std::cout << "削除後の要素数: " << scores.size() << std::endl;
}