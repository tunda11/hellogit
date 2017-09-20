//Assignment Implementation
//Assignment.cpp
 #include "Assignment.h"

void Birthday::setDay(int d)
  {
	  day = d;
  } 

int Birthday::getDay()
  {
	  return day;
  } 

void Birthday::setMonth(string m)
  {
	  month = m;
  } 

string Birthday::getMonth()
  {
	  return month;
  } 

void Birthday::setYear(int y)
  {
	  year = y;
  } 

int Birthday::getYear()
  {
	  return year;
  } 

Birthday::Birthday(int d, string m, int y)
  {
	  day = d;
	  month = m;
	  year = y;
  }
