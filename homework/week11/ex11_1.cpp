#include <iostream>
#include <algorithm>

class Point
{
public:
    float x;
    float y;

    // デフォルトコンストラクタ
    Point() : x(0.0f), y(0.0f) {}

    // 引数付きコンストラクタ
    Point(float x, float y) : x(x), y(y) {}
};

class Rectangle
{
private:
    // 常に pt1: 左下の頂点, pt2: 右上の頂点 になるように保持する
    Point pt1; // 左下
    Point pt2; // 右上    
public:
    // デフォルトコンストラクタ：pt1(0,0), pt2(1,1)
    Rectangle() : pt1(0.0f, 0.0f), pt2(1.0f, 1.0f)
    {
    }

    // 引数付きコンストラクタ
    // 注意: p1, p2 の位置関係に関わらず、pt1=左下, pt2=右上 になるよう正規化
    Rectangle(const Point &p1, const Point &p2)
    {
        pt1.x = std::min(p1.x, p2.x);
        pt1.y = std::min(p1.y, p2.y);
        pt2.x = std::max(p1.x, p2.x);
        pt2.y = std::max(p1.y, p2.y);
    }

    // 面積
    float area() const
    {
        return (pt2.x - pt1.x) * (pt2.y - pt1.y);
    }

    // 周長
    float perimeter() const
    {
        return 2.0f * ((pt2.x - pt1.x) + (pt2.y - pt1.y));
    }

    // 挿入演算子 <<
    friend std::ostream& operator<<(std::ostream &os, const Rectangle &r)
    {
        os << "[(" << r.pt1.x << ", " << r.pt1.y << "), ("
           << r.pt2.x << ", " << r.pt2.y << ")], area = " << r.area();
        return os;
    }

    // 抽出演算子 >>
    // 入力形式：x1 y1 x2 y2
    friend std::istream& operator>>(std::istream &is, Rectangle &r)
    {
        float x1, y1, x2, y2;
        is >> x1 >> y1 >> x2 >> y2;
        
        r.pt1.x = std::min(x1, x2);
        r.pt1.y = std::min(y1, y2);
        r.pt2.x = std::max(x1, x2);
        r.pt2.y = std::max(y1, y2);
        
        return is;
    }
};

// 動作確認用 main、この部分は変更しないでください
int main()
{
    using namespace std;
    Rectangle r1;
    Rectangle r2(Point(3.0f, 2.0f), Point(0.6f, 0.5f));

    Rectangle r3;
    cout << "矩形の座標を、x1 y1 x2 y2 の形式で入力してください：" ;
    cin >> r3;

    cout << "r1 = " << r1 << "\n";
    cout << "r2 = " << r2 << "\n";
    cout << "r3 = " << r3 << "\n";
}