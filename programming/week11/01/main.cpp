// Date オブジェクトの初期化 
#include <iostream> 
#include "Date.h" 
using namespace std; 
 
int main() 
{ 
    Date a(2025, 11, 18); // 1. 直接初期化 
    Date b = a;           // 2. コピー初期化 
    Date c(a);        // 3. コピー初期化
}