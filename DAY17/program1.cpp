#include<iostream>

using namespace std;

int main()
{
	int num,den;
	float ans;
	try
	{
		cout<< "\nEnter numerator and denominator : ";
		cin>>num>>den;
		
		if (den==0)
			throw 0;
		ans = static_cast<float>(num/den);
		cout<<"\nAns: "<< ans;
	}
	
	catch(int d)
	{
		cout<<"\nEXCEPTION DIVIDE BY ZERO";
	}
	
	cout<<endl<<endl;
	
	return 0;
}
