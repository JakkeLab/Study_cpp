#include <iostream>

using namespace std;

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

int main() {

    int wallet1 = 100;
    int wallet2 = 200;

    cout << "최초 상태" << endl;
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
    
    cout << "참조를 이용한 값의 교환 \n";
    swapA(wallet1, wallet2);
    cout << "참조를 이용한 교환 이후 상태\n";
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

    cout << "포인터를 이용한 값의 교환 \n";
    swapB(&wallet1, &wallet2);
    cout << "포인터를 이용한 교환 이후 상태\n";
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

    cout << "값을 이용한 값의 교환 \n";
    swapC(wallet1, wallet2);
    cout << "값을 이용한 교환 이후 상태\n";
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
    //값을 이용해 변환을 시도하는 경우 안바뀐것처럼 보인다. 이는 함수 자체가 매개변수를 복사본으로 만들어 사용하기 때문이다.
    //따라서 원본에 대해 변환을 시도하고 싶으면 참조를 넣어야한다.

    return 0;
}

void swapA(int& a, int& b){
    int temp;

    temp = a;
    a = b;
    b = temp;
}

void swapB(int* a, int* b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void swapC(int a, int b){
    int temp;

    temp = a;
    a = b;
    b = temp;
}