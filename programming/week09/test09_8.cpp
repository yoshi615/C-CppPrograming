#include <iostream>
using namespace std;

// compute関数は、実行する演算を決定するために関数ポインタopを受け取る 
void compute(int a, int b, int (*op)(int, int)) 
{ 
    cout << "Result: " << op(a, b) << endl; 
} 
 
int add(int a, int b) { return a + b; } 
int multiply(int a, int b) { return a * b; } 
 
int main() 
{ 
    compute(10, 5, add);        // add関数をコールバックとして渡す 
    compute(10, 5, multiply);   // multiply関数をコールバックとして渡す 
} 