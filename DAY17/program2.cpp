#include<iostream>

using namespace std;

int divide(int &n, int &d)
{
	int ans;
	if (d==0)
		throw d;
	ans = n/d;
	return ans;
}

int main()
{
	int num,den;
	float ans;
	cout<< "\nEnter numerator and denominator : ";
	cin>>num>>den;
	try
	{
		ans = divide(num,den);
		cout<<"\nAns: "<< ans;
	}
	
	catch(int ex)
	{
		cout<<"\nEXCEPTION DIVIDE BY ZERO";
	}
	
	cout<<endl<<endl;
	
	return 0;
}
