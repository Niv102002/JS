#include<iostream>

using namespace std;

class Date
{
	public :
		Date()
		{
			day=month=year=0;
		}
		Date (int dy,int mon, int yr)
		{
			day = dy;
			month = mon;
			year = yr;
		}
		
		void displaydate()
		{
			cout<<"Date : "<<day<<"/"<<month<<"/"<<year<<endl;
		}
		
	private : 
		int day, month, year;
};
