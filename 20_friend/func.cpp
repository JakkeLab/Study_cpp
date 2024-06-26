#include "time.h"
#include <iostream>

using namespace std;

Time::Time(){
    hours = mins = 0;
}

Time::Time(int h, int m){
    hours = h;
    mins = m;
}

Time::~Time(){
    
}

void Time::addHours(int h){
    hours += h;
};

void Time::addMins(int m){
    mins += m;
    hours += mins / 60;
    mins %= 60;
}

Time Time::operator+(Time& t){
    Time sum;
    sum.mins = mins += t.mins;
    sum.hours = hours + t.hours;
    sum.hours += sum.mins / 60;
    sum.mins %= 60;

    return sum;
}

void Time::show(){
    cout << "시간 : " << hours << endl;
    cout << "분 : " << mins << endl;
}

// Time operator*(int n, Time& t) {
//     Time result;
//     long resultMin = t.hours * n * 60 + t.mins * n;
//     result.hours = resultMin / 60;
//     result.mins = resultMin % 60;
//     return result;
// }