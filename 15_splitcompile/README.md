### 컴파일 세팅
Code runner에서 분할 컴파일을 제대로 하기위해 아래와같이 명령어를 수정함

cd $dir && g++ -fdiagnostics-color=always -g *.cpp -o main && ./main