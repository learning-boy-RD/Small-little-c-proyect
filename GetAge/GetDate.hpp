#include<iostream>
#include<ctime>
using namespace std;

int GetYear(){
int year;
time_t t = time(0);   // get time now
tm* now = localtime(&t);
year=now->tm_year+1900;
return year;
}
int GetDay(){
int day;
time_t t= time(0);
tm* now = localtime(&t);
day = now-> tm_mday;
return day;
}
int GetMonth(){
int month;
time_t tnow=time(0);
tm* actual= localtime(&tnow);
month=actual->tm_mon+1;
return month;
}
