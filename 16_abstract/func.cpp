#include "stock.h"

//Stock이라는 클래스 내에서 접근할 수 있다는 것으로, private에 정의해둔 변수에 접근이 가능해짐.

void Stock::acquire(const string& co, int n, float pr) {
    name = co;
    shares = n;
    share_val = pr;
    set_total();
}

void Stock::buy(int n, float pr) {
    shares += n;
    share_val = pr;
    set_total();
}

void Stock::sell(int n, float pr) {
    shares -= n;
    share_val = pr;
    set_total();
}

void Stock::update(float pr) {
    share_val = pr;
    set_total();
}

void Stock::show() {
    cout << "회사 명 : " << name << endl;
    cout << "주식 수 : " << shares << endl;
    cout << "주가 : " << share_val << endl;
    cout << "주식 총 가치 : " << total_val << endl;
}

//생성자
Stock::Stock(){

}

//파괴자 (C++의 특징)
Stock::~Stock(){
    
}