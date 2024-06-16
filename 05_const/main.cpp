#include <iostream>
#define PIE 3.1415926535;

using namespace std;

int main() {
    int r = 3;

    // const float PIE = 3.1415926535;
    float s = r * r * PIE;
    cout << s << endl;

    int a = 3.141592;
    cout << a << endl;
    
    char ch = 'M';
    cout << (int)ch << " " << int(ch) << endl;
    cout << (int)ch << " " << int(ch) << endl;
    cout << static_cast<int>(ch) << endl;
    
    return 0;
}