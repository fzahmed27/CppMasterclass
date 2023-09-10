#include <iostream>

int main(){
    struct Date {
        int day;
        int month;
        int year;
    };

Date mydate;
mydate.day = 11;
mydate.month = 12;
mydate.year = 2023;

std::cout << "The current date is " << mydate.day << "/" << mydate.month << "/" << mydate.year << std::endl;


}



