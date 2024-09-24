#include<iostream>

using namespace std;

class MyException
{
	int len;
	char *sptr;
	
	public:
		MyException()
		{
			len = strlen("Exception Ocurred");
			sptr = new char [len+1];
			strcpy(sptr,"Exception Ocurred");
		}
		MyException(const char * str)
		{
			len = strlen(str);
			sptr = new char [len+1];
			strcpy(sptr,str);
		}
		char * what()
		{
			return sptr;
		}
};
