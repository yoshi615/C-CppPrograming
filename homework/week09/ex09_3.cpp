#include <iostream>
#include <cstdlib>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int main() {
    int a, b;
    char op;

    std::cout << "第1の数を入力してください: ";
    if (!(std::cin >> a)) return 0;

    std::cout << "演算子（+, -, *, /）を入力してください: ";
    if (!(std::cin >> op)) return 0;

    std::cout << "第2の数を入力してください: ";
    if (!(std::cin >> b)) return 0;

    int (*func)(int,int) = nullptr;
    char opname = op;

    switch (op) {
        case '+': func = add; break;
        case '-': func = sub; break;
        case '*': func = mul; break;
        case '/': 
            if (b == 0) {
                std::cout << "0で割ることはできません" << std::endl;
                return 0;
            }
            func = divide; 
            break;
        default:
            std::cout << "不正な演算子です" << std::endl;
            return 0;
    }

    int result = func(a, b);
    std::cout << a << ' ' << opname << ' ' << b << " = " << result << std::endl;
    return 0;
}