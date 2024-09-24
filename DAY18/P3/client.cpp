#include "def.cpp"

int main()
{
	Demo<int> d1(10);
	d1.show();
	
	Demo<char> d2('a');
	d2.show();
	
	Demo<string> d3("Hello");
	d3.show();
	
	cout<<endl<<endl;
	
	return 0;
}
