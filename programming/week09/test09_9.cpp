#include <iostream> 
 
using namespace std; 
 
//--- int, int の最大値 --- 
int calc_max(int a, int b) 
{ 
    return a > b ? a : b; 
} 
 
//--- float, float の最大値 --- 
float calc_max(float a, float b) 
{ 
    return a > b ? a : b; 
} 
 
//--- int, int, int の最大値 --- 
int calc_max(int a, int b, int c) 
{ 
    int max_val = a; 
    if (b > max_val) max_val = b; 
    if (c > max_val) max_val = c; 
    return max_val;  
} 
 
int main() 
{ 
    cout << "max(10, 20) = " << calc_max(10, 20) << '\n'; 
    cout << "max(3.14f, 1.23f) = " << calc_max(3.14f, 1.23f) << '\n'; 
    cout << "max(10, 20, 30) = " << calc_max(10, 20, 30) << '\n'; 
}