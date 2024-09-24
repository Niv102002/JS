#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

int main()
{
	char str[20];
	int n;
	
	ofstream out;
	out.open("emp_name.txt");
	
	if (!out.is_open())
	{
		cout<<"\nCannot open file";
		exit(0);
	}
	do
	{
		cout<<"\nEnter Name : ";
		cin>>str;
		out << str << ",";
		
		cout<<"\nDo you want to continue ? (1/0)";
		cin >> n;
	} while(n!=0);
	
	cout<<"\nWriting data to file is done...\n";
	out.close();
	
	ifstream in;
	in.open("emp_name.txt");
	
	if (!in.is_open())
	{
		cout<<"\nCannot open file";
		exit(0);
	}
	
	cout<<"\nNames : ";
	in >> str;
	stringstream name(str);
	string temp;
	
	while(getline(name,temp,','))
		cout<<"\n"<<temp;
	
	in.close();
	
	cout<<endl<<endl;
	
	return 0;
}
