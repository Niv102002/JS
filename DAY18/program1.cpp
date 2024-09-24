#include<stdlib.h>
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream out;
	out.open("demo.txt");
	
	if(!out.is_open())
	{
		cout<<"\nCannot open file";
		exit(0);
	}
	
	out.put('A');
	out.put('B');
	out.put('C');
	out.close();
	
	ifstream in;
	in.open("demo.txt");
	
	if(!in.is_open())
	{
		cout<<"\nCannot open file";
		exit(0);
	}
	
	char ch;
	while ((ch=in.get())!=EOF)
		cout<< " "<< ch;
	
	in.close();
	cout<<endl<<endl;
	return 0;
}
