#include <iostream>

using namespace std;

int main() {
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++Prigramming";

    cout << "안녕하세요! 저는 " << name2;
    cout << "입니다! 성함이 어떻게 되시나요\n";
    // cin >> name1; //white space를 만나면 입력의 끝으로 처리한다.
    cin.getline(name1, Size); //공백을 포함하여 입력을 받을 수 있다.
    cout << "음, " << name1 << "씨, 당신의 이름은 ";
    cout << strlen(name1) << "바이트, 크기의 배열에 저장되었습니다.\n";
    cout << "이름이" << name1[0] << "자로 시작한느군요.\n";
    name1[3] = '\0';
    cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
    cout << name2 << endl;
    return 0;
}