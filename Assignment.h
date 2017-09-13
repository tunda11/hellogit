   class Birthday{
		
		private: 
		 string month;
		 int year, day;
		
		public:
		  void Birthday(int d, string m, int y){
		    day = d;
		    month = m;
		    year = y;
		  }
		
		int getDay(){
			return day;
		 }
		
		int setDay(int d){
			int day = d;
		 }
		void getMonth(){
			month;
		 }
		
		string setMonth(string m){
			string month = m;
		 }
		
		int getYear(){
			return year;
		 }
		
		int setYear(int y){
			int year = y;
		 }
		}//End of Class
		
		
