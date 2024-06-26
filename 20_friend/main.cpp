#include <iostream>
#include "time.h"

using namespace std;

int main() {
    Time t1(1, 20);
    Time t2;

    t2 = t1 * 3;
    t2.show();

    return 0;
}