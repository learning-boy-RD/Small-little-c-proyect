#include<iostream>
#include"GetDate.hpp" //Library to get the actual date, GetDay,GetYear etc are from there
#include<windows.h>
#include <conio.h>

using namespace std;        //actual=current in spanish

int EdadSegunNacimiento(int year,int day,int month) { //the date is abaout the user's birthday
    int actual_day=GetDay(),actual_year=GetYear(),actual_month=GetMonth();
    int age;
     age=actual_year-year;  //if you have 14, this will give you the age  you will get in the current year, that is 15
     if (actual_month>=month) {                        //Example you have 15 years old, the function checks if you have turned 15 in the current moment
         if (month==actual_month && day>=actual_day) {  //if you have already turned 15 the value of "int age" won't change and the function will return
             return age;                               //the age with 15
         }
         return age;
     }
     age=age-1;                                         //But if you have 14 years old yet, the function will rest 1 year of the "int age" with the value 15.
     return age;                                          //and the function will return the age with 14;

}

void show(const char* text ) {
cout << text <<endl;
}

int main(int argc, char const *argv[]) {

    int year,day,month; //Of the user's birth
    show("Write your year of birth");
        cin>>year;
    show("Write your month of birth");
        cin>>month;
    show("Write your day of birth");
        cin >>day;
        show("Your age is: ");
            cout<<EdadSegunNacimiento(year,day,month)<<endl;
    getch();
    return 0;
}
