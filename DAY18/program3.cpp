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
	
	try 
	{
		person p3;
		do
		{
			in.read((char*)&p3, sizeof (person));
			
			if(in.eof())
				break;
			p3.display();
		} while(!in.fail());
		in.close();
	}
	catch(std::exception &ex)
	{
		cout<<"\n\n\t error while reading";
		cout<<"\t"<<ex.what();
		in.close();
	}
	
	cout<<endl<<endl;
	
	return 0;
}
