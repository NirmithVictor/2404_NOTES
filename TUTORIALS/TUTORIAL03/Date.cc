#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Date.h"

Date::Date(int d, int m, int y)
{
  //cout<<"in default ctor"<<endl;
  setDate(d, m, y);
}

Date::~Date()
{
//  cout<<"in dtor"<<endl;
}

bool Date::greaterThan(Date* d){
	
	 //year
    cout<<"IT REACHED HERE\n";
    if(year<d->year){
        cout<<"Year";
        return false;
    }
    //month
    else if(year==d->year){
        //day
        if(month>d->month){
            cout<<"Month";
            return true;
        }
        else if(month==d->year){
            if(day<d->day){
                cout<<"DATE";
                return true;
            }
            else if(day==d->day){

                //return false;
                equals(d);
            }
        }
    }
    else{
        cout<<"It Is Lesser Than"<<endl;
    }
    cout<<"IT IS DONE\n";
    return false;
	
}

bool Date::equals(Date* d){
	if(!greaterThan(d)){
		cout<<"THE DATES ARE EQUAL\n";
	}
	return true;
}

void Date::setDate(int d,int m,int y)
{
  year  = ( ( y > 0) ? y : 0 );
  month = ( ( m > 0 && m <= 12) ? m : 0 );
  day   = ( ( d > 0 && d <= lastDayInMonth() ) ? d : 0 );
}


void Date::print() 
{
  cout<<setfill('0')<<setw(2)<<year<<"-"<<setfill('0')<<setw(2)<<month<<"-"<<setfill('0')
  <<setw(2)<<day<<" ";
  //month = 8;
}

void Date::print() const
{
  cout<<setfill('0')<<setw(2)<<year<<"-"<<setfill('0')<<setw(2)<<month<<"-"<<setfill('0')
  <<setw(2)<<day<<endl;
//  month = 8;
}

int Date::lastDayInMonth()
{
  switch(month)
  {
    case 2:
      if (leapYear())
        return 29;
      else
        return 28;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      return 31;
    default:
      return 30;
  }
}

bool Date::leapYear()
{
  if ( year%400 == 0 ||
       (year%4 == 0 && year%100 != 0) )
    return true;
  else
    return false;
}

string Date::getMonthStr() const
{
  string monthStrings[] = { 
    "January", "Februrary", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December" };

  if ( month >= 1 && month <= 12 )
    return monthStrings[month-1];
  else
    return "Unknown";
}
