#include<iostream>
using namespace std;

class score
{
	public :
		score()
		{
			s=avg=0;
			marks[5]={0};
		}
		
		
		void assignmarks()
		{
			for (int i=0;i<5;i++)
			{
				cout<<"Enter marks of subject : ";
				cin>>marks[i];
			}
			cout<<endl;
		}
		
		void sum()
		{
			s = 0;
			for (int i=0;i<5;i++)
			{
				s += marks[i];
			}
		}
		
		void average()
		{
			avg = s/n;
		}
		
		void display()
		{
			for (int i=0;i<5;i++)
			{
				cout<<"Marks of subject "<<i<<" is : "<<marks[i]<<endl;
			}
			cout<<endl<<"Sum of total marks : "<<s<<endl;
			cout<<endl<<"Average of marks : "<<avg<<endl<<endl;
		}
		
		
	
	private : 
		int s,avg;
		int marks[5];
};

int main()
{
	score stud;
	
	stud.subject();
	stud.assignmarks();
	stud.sum();
	stud.average();
	stud.display();
	
	return 0;
}
