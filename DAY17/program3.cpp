#include<iostream>

using namespace std;

void display(int n)
{
	if (n==0)
		throw 0; //throwing int
	else if (n>0)
		throw "some inappropiriate values"; //throwing string
	else if (n<0)
		throw '\n'; //throwing char
}

int main()
{
	int n,op;
	char ch;
	try
	{
		cout<< "\nEnter int or char (1/0) : ";
		cin>>op;
		if(op==1)
		{
			cout<<"\n Enter int value::";
			cin>>n;	
			display(n);
		}
		else if(op==0)
		{
			cout<<"\n Enter char value::";
			cin>>ch;	
			display(static_cast<int>(ch));
		}
	}
	
	catch(int ex)
	{
		cout<<"\nEXCEPTION : WRONG INT";
	}
	catch(char ex)
	{
		cout<<"\nEXCEPTION : WRONG CHAR";
	}
	catch(...)
	{
		cout<<"\nEXCEPTION UNDEFINED";
	}
	
	cout<<endl<<endl;
	
	return 0;
}
