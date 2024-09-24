#include<iostream>
using namespace std;

class score
{
	public :
		score()
		{
			n=s=avg=0;
			marks=new int[n];
		}
		
		void subject()
		{
			cout<<"Enter number of subjects : ";
			cin>>n;
			cout<<endl;
		}
		void assignmarks()
		{
			for (int i=0;i<n;i++)
			{
				cout<<"Enter marks of subject : ";
				cin>>marks[i];
			}
			cout<<endl;
		}
		
		void sum()
		{
			s = 0;
			for (int i=0;i<n;i++)
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
			for (int i=0;i<n;i++)
			{
				cout<<"Marks of subject "<<i<<" is : "<<marks[i]<<endl;
			}
			cout<<endl<<"Sum of total marks : "<<s<<endl;
			cout<<endl<<"Average of marks : "<<avg<<endl<<endl;
		}
		
		
	
	private : 
		int n,s,avg;
		int *marks=NULL;
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
