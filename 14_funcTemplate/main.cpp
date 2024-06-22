#include <iostream>

using namespace std;

template<class any>
any sum(int, any);

int main() {
    int a = 3;
    int b = 4;
    // cout << sum(a, b) << endl;
    
    float c = 3.14;
    float d = 1.592;
    // cout << sum(c, d) << endl;
    cout << sum(a, c) << endl;

    return 0;
}

template <class any>
any sum(int a, any b){
    return a + b;
}