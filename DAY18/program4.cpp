#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<exception>

using namespace std;

class person
{
	int age;
	char name[20];
	
	public: 
		person()
		{
			age = 0;
			strcpy(name,"NULL");
		}
		person(int a, const char *nm)
		{
			age = a;
			strcpy(name,nm);
		}
		void display()
		{ 	
			cout<<"\nAge : "<< age<<"\nName : "<< name;
		}
		void accept()
		{ 
			cout<<"\nEnter Age and name";
			cin>>age>>name;
		}
};

int main()
{
	char ch=0;
	int n;
	
	ofstream out;
	out.open("person.txt",ios::binary);
	
	if (!out.is_open())
	{
		cout<<"\nCannot open file";
		exit(0);
	}
	
	cout<<"\nAfter opening for writing : "<<out.tellp();
	out.seekp(2*sizeof(person),ios::beg);
	
	person p1;
	do
	{
		p1.accept();
		out.write((char*)&p1, sizeof(person));
		
		cout<<"\nDo you want to continue ? (1/0)";
		cin >> n;
		
	} while(n!=0);
	
	//cout<<"\nWriting data to file is done...\n";
	out.close();
	
	
	ifstream in;
	in.open("person.txt",ios::binary);
	
	if (!in.is_open())
	{
		cout<<"\nCannot open file";
		exit(0);
	}
	
	cout<<"\nAfter opening for reading : "<<in.tellg();
	in.seekg(2*sizeof(person),ios::beg);
	cout<<"\nAfter reposition : "<<in.tellg();
	cout<<"\nchar fetched : "<<static_cast<char>(in.get());
	in.close();
	
	cout<<endl<<endl;
	
	return 0;
}
