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

Time Time::operator*(int n) {
	Time result;
	long resultMin = hours * n * 60 + mins * n;
	result.hours = resultMin / 60;
	result.mins = resultMin % 60;
	return result;
}


void Time::show(){
    cout << "시간 : " << hours << endl;
    cout << "분 : " << mins << endl;
}

std::ostream& operator<<(std::ostream& os, Time& t) {
	os << t.hours << "시간 " << t.mins << "분";
	return os;
}

NewTime::NewTime() : Time(){
    day = 0;
}

NewTime::NewTime(int h, int m, int d) : Time(h, m) {
    day = d;
}

void NewTime::show(){
    std::cout << "일 : " << day << std::endl;
    std::cout << "시간 : " << getHour() << std::endl;
    std::cout << "분 : " << getMins() << std::endl;
}