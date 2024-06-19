#include <iostream>

using namespace std;

int main() {

    //공용체(union)는 한번에 한가지 종류의 값만 저장 가능하다.
    union MyUnion
    {
        int intVal;
        long longVal;
        float floatVal;
    };

    // MyUnion test;
    // test.intVal = 3;
    // cout << test.intVal << endl;
    // test.longVal = 33;
    // cout << test.intVal << endl;
    // cout << test.longVal << endl;
    // test.floatVal = 3.3;
    // cout << test.intVal << endl;
    // cout << test.longVal << endl;
    // cout << test.floatVal << endl;

    //열거체(enum) : 

    enum spectrum { red = 101, orange, yello, green, blue, violet, indigo, ultravioloet };

    spectrum a = orange;
    cout << a << endl;

    int b;
    b = blue;
    cout << b << endl;
    b = blue + red;
    cout << b << endl;
    return 0;
}