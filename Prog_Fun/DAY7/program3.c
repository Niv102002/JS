#include<stdio.h>

typedef struct student_details
{
	int roll_no;
	char name[20];
	float marks;
}student;

void accept(student *, int);
void display(student *, int);


int main()
{
	
	int i;
	printf("enter size : ");
	scanf("%d",&i);
	student stud[i];
	
	accept(stud,i);
	display(stud,i);
	//checkmarks(stud1.marks);
	
	return 0;
}

void accept(student *stud,int size)
{
	printf("Enter Student details: ");
	for(int i=0;i<size;i++)
	{
		scanf("%d %s %f",&stud[i].roll_no, stud[i].name, &stud[i].marks);
	}
}

void display(student *stud,int size)
{
	int i;
	printf("Student details: \n");
	for(i=0;i<size;i++)
	{
		printf("Roll no - %d\tName - %s\tMarks - %f\n",stud[i].roll_no, stud[i].name, stud[i].marks);
	}
}


