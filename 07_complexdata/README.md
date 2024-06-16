# Garbage와 Garbage Collector

Java, C# 등 다른언어에서는 Garbage Collector가 있고, 각 타입으 초기화형이 예약이 되어있다.<br/>
그러다보니 맨 끝에 null문자가 없을때 아래와 같은 상황을 만나서 당황할 수 있다.

```cpp
// a 배열은 null 문자 ('\0')가 없어서 쓰레기 값이 나올 수 있음.
char a[5] = {'H', 'e', 'l', 'l', 'o' };
cout << a << endl;
//출력결과 : Hello.yk 등 임의문자가 추가된 형

```

이럴때 char 배열로 문자열을 만들때 끝에 null문자('\0')을 넣어주도록 하자.