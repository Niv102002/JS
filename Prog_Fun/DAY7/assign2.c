#include<stdio.h>

typedef struct student_details
{
	int roll_no;
	char name[20];
	float marks[3];
}student;

void accept(student *, int);
void display(student *, int);
void average(student *, int,float *);
void find_topper(student *, int,float *);


int main()
{
	
	int i;
	printf("enter size : ");
	scanf("%d",&i);
	printf("\n");
	float avg[i];
	student stud[i];
	
	accept(stud,i);
	display(stud,i);
	printf("\n\n");
	average(stud,i,avg);
	printf("\n\n");
	find_topper(stud,i,avg);
	return 0;
}

void accept(student *stud,int size)
{
	printf("Enter Student details: ");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&stud[i].roll_no);
		for (int j=0;j<3;j++)
		{
			scanf("%f",&stud[i].marks[j]);
		}
		gets(stud[i].name);
	}
}

void display(student *stud,int size)
{
	printf("\nStudent details: \n");
	for(int i=0;i<size;i++)
	{
		printf("Roll no - %d\tName - %s\t",stud[i].roll_no, stud[i].name);
		for (int j=0;j<3;j++)
		{
			 printf("Marks of sub %d : %.2f\t",j,stud[i].marks[j]);
		}
		printf("\n");
	}
}

void average(student *stud,int size,float * avg)
{
	printf("Average Marks of students: \n");
	for(int i=0;i<size;i++)
	{
		avg[i]=0;
		for (int j=0;j<3;j++)
		{
			avg[i]+=stud[i].marks[j];
		}
		avg[i]=avg[i]/3;
		printf("Average of student with roll no. - %d is %.2f\n",stud[i].roll_no,avg[i]);
	}
	return avg;
}

void find_topper(student *stud,int size,float * avg)
{
	int topper=0;
	int high_marks=0;
	for (int i=0;i<size;i++)
	{
		if (high_marks>avg[i])
		{
			continue;
		}
		else
		{
			high_marks=avg[i];
			topper=i;
			continue;
		}
	}
	printf("Topper is Roll No. - %d\tname - %s\n",stud[topper].roll_no, stud[topper].name);
}


