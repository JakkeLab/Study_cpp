#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int는 " << sizeof n_int << "바이트이다." << endl;
    cout << "short는 " << sizeof n_short << "바이트이다." << endl;
    cout << "long는 " << sizeof n_long << "바이트이다." << endl;
    cout << "llong는 " << sizeof n_llong << "바이트이다." << endl;
}