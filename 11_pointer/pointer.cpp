#include <iostream>
#include <cstring>
#define SIZE 20

using namespace std;

int main() {

    char animal[SIZE];
    char* ps;

    cout << "동물 이름을 입력하시오\n";
    cin >> animal;

    //배열의 크기를 new를 통해 실행시간에 지정할 수 있게 된다.
    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);

    cout << "입력하신 동물 이름을 복사하였습니다" << endl;
    cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << " 입니다." << endl;
    cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << " 입니다." << endl;

    return 0;
}