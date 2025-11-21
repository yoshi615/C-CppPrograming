#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void reverse_string(char str[]) {
    size_t n = strlen(str);
    if (n == 0) return;
    size_t i = 0;
    size_t j = n - 1;
    while (i < j) {
        while (i < j && !std::isalnum(static_cast<unsigned char>(str[i]))) ++i;
        while (i < j && !std::isalnum(static_cast<unsigned char>(str[j]))) --j;
        if (i < j) {
            char tmp = str[i];
            str[i] = str[j];
            str[j] = tmp;
            ++i;
            if (j == 0) break;
            --j;
        }
    }
}

int main()
{
    char s[10] = {0};
    cin.getline(s, 10);
    reverse_string(s);
    cout << s << '\n';
    return 0;
}