#include<stdio.h>

typedef struct student_details
{
	int roll_no;
	char name[20];
	float marks;
}student;

void accept(student*);
void display(student);
void checkmarks(int);


int main()
{
	student stud1;
	
	accept(&stud1);
	display(stud1);
	checkmarks(stud1.marks);
	
	return 0;
}

void accept(student * stud1)
{
	printf("Enter Student details: ");
	scanf("%d %s %f ",&stud1->roll_no,stud1->name,&stud1->marks);
}

void display(student stud1)
{
	printf("Student details: Roll no - %d \nName - %s \nMarks - %f\n",stud1.roll_no, stud1.name, stud1.marks);
}

void checkmarks(int marks)
{
	if (marks>50)
	{
		printf("Valid marks\n");
	}
	else
	{
		
		printf("Invalid marks\n");
	}
}
