#include <iostream>

class FloatArray
{
private:
    int size;
    float *data;

public:
    // コンストラクタ：要素数 n の配列を確保し、0.0f で初期化
    FloatArray(int n = 0)
        : size(n), data(nullptr)
    {
        if (n > 0) {
            data = new float[n];
            for (int i = 0; i < n; ++i)
                data[i] = 0.0f;
        }
    }

    // コピーコンストラクタ
    FloatArray(const FloatArray& x)
       : size(x.size), data(nullptr)
    {
        if (x.size > 0) {
            data = new float[x.size];
            for (int i = 0; i < x.size; ++i)
                data[i] = x.data[i];
        }
    }

    // デストラクタ：確保した動的配列を解放
    ~FloatArray() 
    {
        delete[] data;
    }

    // 配列の要素数を返す
    int length() const 
    {
        return size;
    }

    // 添字演算子
    float &operator[](int index)
    {
        return data[index];
    }
 
    // 代入演算子 =
    FloatArray &operator=(const FloatArray &x)
    {
        if (this == &x) return *this;
        
        delete[] data;
        size = x.size;
        if (x.size > 0) {
            data = new float[x.size];
            for (int i = 0; i < x.size; ++i)
                data[i] = x.data[i];
        } else {
            data = nullptr;
        }
        return *this;
    }

    // 配列 + スカラ（各要素に value を加えた新しい配列を返す）
    FloatArray operator+(float value) const
    {
        FloatArray result(size);
        for (int i = 0; i < size; ++i)
            result.data[i] = data[i] + value;
        return result;
    }

    // 配列 + 配列（要素ごとの和）
    FloatArray operator+(const FloatArray &x) const
    {
        FloatArray result(size);
        for (int i = 0; i < size; ++i)
            result.data[i] = data[i] + x.data[i];
        return result;
    }

    // 挿入演算子 << のオーバーロード
    friend std::ostream &operator<<(std::ostream &os, const FloatArray &a)
    {
        os << "[";
        for (int i = 0; i < a.size; ++i) {
            os << a.data[i];
            if (i < a.size - 1) os << ", ";
        }
        os << "]";
        return os;
    }
};

// 動作確認用 main、この部分は変更しないでください
using namespace std;
int main()
{
    // 要素数 5 の配列を作成
    FloatArray a(5);
    for (int i = 0; i < a.length(); ++i)
        a[i] = i * 0.3f; 
    cout << "a = " << a << endl;

    FloatArray b, c;

    // 配列 + スカラのテスト
    b = a + 2.0f; // 各要素に 2.0 を加える
    cout << "b = " << b << endl;

    // 配列 + 配列のテスト
    c = a + b;
    cout << "c = " << c << endl;
}
