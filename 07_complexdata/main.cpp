#include <iostream>

using namespace std;

int main() {

    /*
    typeName arrName[arrSize];
    */

    short month[12] = { 1, 2, 3 };

    // 배열을 통으로 넣어보니 메모리 주소를 출력해준다.
    cout << "---배열자체 출력---" << endl;
    cout << month << endl;  // 이 부분은 month 배열의 첫 번째 요소의 메모리 주소를 출력함.

    // 배열의 끝에 null문자를 안넣어주니 출력결과가 이상해진다.

    // a 배열은 null 문자 ('\0')가 없어서 쓰레기 값이 나올 수 있음.
    char a[5] = {'H', 'e', 'l', 'l', 'o' };
    // b 배열은 null 문자 ('\0')가 있어서 정상적으로 출력됨.
    char b[6] = {'H', 'e', 'l', 'l', 'o', '\0' };
    // c 배열은 문자열 리터럴로 초기화되어 자동으로 null 문자가 추가됨.
    char c[6] = "Hello";

    cout << "---문자 배열 출력---" << endl;
    cout << a << endl; // null 문자가 없어서 쓰레기 값이 나올 수 있음.
    cout << b << endl; // 정상적으로 출력됨.
    cout << c << endl; // 정상적으로 출력됨.

    return 0;
} 