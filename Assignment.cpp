//client 
#include <iostream>
#include <vector>
#include "Assignment.h"

using namespace std;

int main ()
	{	Birthday bDay = {15, "November", 2013};
		
		
		vector <Birthday> v1 = {
			{12, "Nov", 1996}
	//{bDay.setDay(5), bDay.setMonth("Nov"), bDay.setYear(97)},
	//{bDay.setDay(1), bDay.setMonth("Dec"), bDay.setYear(95)},
	//{bDay.setDay(2), bDay.setMonth("Jan"), bDay.setYear(98)},
	//{bDay.setDay(3), bDay.setMonth("Feb"), bDay.setYear(99)},
	};
	 
	 cout << "Done";
	 cout << bDay.getDay() << " " << bDay.getMonth()<< " " << bDay.getYear() << endl;
	 //cout << bDay.getDay() << " " << bDay.getMonth()<< " " << bDay.getYear() << endl;
	 //cout << bDay.getDay() << " " << bDay.getMonth()<< " " << bDay.getYear() << endl;
	 //cout << bDay.getDay() << " " << bDay.getMonth()<< " " << bDay.getYear() << endl;
	 return 0;
	}//End of Main
