// DateLibraryProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma warning(disable:4996)
#include <iostream>
#include "clsDate.h"
#include "clsString.h"
#include<ctime>
using namespace std;
int main()
{
    
   // clsDate date1;
   // date1.Print();
   // /*clsDate date2(44,12,2022);*/
   // clsDate date2(4, 2, 2022);
   // /*if(date2.IsValidateDate(date2)){
   //     cout << "Yes,the date is validate\n";
   // }
   // else {
   //     cout << "No,the date isn't validate\n";
   // }*/
   // /*date2.Print();*/
   // clsDate date3("3,12,2022");
   // date3.Print();
   // cout<<date1.IsDate1BeforeDate2(date2,date3)<<endl;
   // cout << date1.CalculateVacationDays(date2, date3) << endl;
   ///* cout << date1.CompareTwoDates(date2, date3) << endl;*/
   // date2.Print();
    clsDate Date1;
    Date1.Print();
    clsDate Date2("77/1/2022");
    Date2.Print();
    clsDate Date3(88, 12, 2022);
    Date3.Print();
    clsDate Date4(250, 2022);
    Date4.Print();
    Date1.IncreaseDateByOneMonth();
    Date1.Print();
    //Date3.PrintYearCalendar();
    //cout << Date2.IsValid() << endl;
    /*cout << "My Age InDays:" <<
    clsDate::CalculateMyAgeInDays( clsDate(6, 11, 1977) );*/
    //You can try any method at your own..
    system("pause>0");
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
