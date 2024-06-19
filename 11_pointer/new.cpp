#include <iostream>

using namespace std;

int main() {
    //new 연산자
    int a;
    int* b = &a;

    int* pointer = new int; //데이터 객체를 지시하고 있음.

    //delete 연산자 : 메모리를 해제해주는 것임.
    int* ps = new int;
    delete ps;
    /*
        1. new로 대입 안하면 delete로 해제 안됨.
    */

    double* p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3 + 1;    //포인터를 증가시켜 p3의 1번 자리로 포인터 이동
    
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3 - 1;    //다시 시작위치(0번 자리)로 이동;
    delete[] p3;    //배열 해제

    //핵심 : 포인터를 1 증가시킨 상황에서 p3의 인덱스를 0을 넣어 p3[0] 을 출력하고자 한다해도 p3의 첫번째 원소가 나오지 않는다
    //일반적인 모던 언어 (C#, Java, JS, Python 등)과 차이를 보이는 부분인것 같다.

    return 0;
}