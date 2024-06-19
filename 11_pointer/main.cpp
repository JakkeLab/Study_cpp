#include <iostream>

using namespace std;

int main() {

    // int val = 3;

    // cout << &val << endl;

    // int *a;
    // int* b;
    // int* c, d; //c는 포인터, d는 일반변수

    int a = 6;
    int* b;

    b = &a;

    cout << "a의 값 : " << a << endl;
    cout << "*b의 값 : " << *b << endl;

    cout << "a의 주소 : " << &a << endl;
    cout << "*b의 주소 : " << b << endl;

    *b = *b + 1;    //포인터는 엄밀히 정수는 아니지만, 포인터를

    cout << "이제 a의 값은 " << a << endl;

    return 0;
}