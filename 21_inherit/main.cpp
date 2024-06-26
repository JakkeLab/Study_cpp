#include <iostream>
#include "time.h"

using namespace std;

int main() {
    Time temp1(30, 2);
    NewTime temp2(3, 30, 2);
    cout << "----Time-------" << endl;
    temp1.show();
    cout << "----NewTime----" << endl;
    temp2.show();
    return 0;
}