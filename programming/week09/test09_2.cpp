// List 6-17: 参照オブジェクト 
#include <iostream> 
 
using namespace std; 
 
int main() 
{ 
    int x = 1; 
    int y = 2; 
     
    // aはxの参照（別名）であり、初期化後に生涯結び付けられる 
    int& a = x;  
 
    cout << "a = " << a << '\n'; 
    cout << "x = " << x << '\n'; 
    cout << "y = " << y << '\n'; 
 
    a = 5; // aに5を代入することは、xに5を代入することと等価 
 
    cout << "a = " << a << '\n'; 
    cout << "x = " << x << '\n'; 
    cout << "y = " << y << '\n'; 
}