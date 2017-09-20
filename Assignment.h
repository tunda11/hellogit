#ifndef Assignment_h
#define Assignment_h   
#include <iostream>

using namespace std;
   
   class Birthday{
		
		private: 
		 string month;
		 int year, day;
		
		public:
		   Birthday(int d, string m, int y);
		   int getDay();
		   void setDay(int d);
		   string getMonth();
		   void setMonth(string m);
		   int getYear();
		   void setYear(int y);
		};//End of Class
	#endif	
		

  
