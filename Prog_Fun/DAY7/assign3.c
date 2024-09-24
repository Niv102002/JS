#include<stdio.h>
#include<stdlib.h>

typedef struct employee_details
{
	int id;
	char name[20];
	float salary;
}emp;

void allocate (emp *, int);
void accept(emp *, int);
void display(emp *, int);
void deallocate (emp *,int);


int main()
{
	int n;
	emp eptr;
	printf("Enter number of employees : ");
	scanf("%d",&n);
	
	printf("\n");
	allocate(&eptr,n);
	printf("\n");
	accept(&eptr,n);
	printf("\n");
	display(&eptr,n);
	printf("\n");
	deallocate(&eptr,n);
	printf("\n");
	
	return 0;
}

void allocate (emp * eptr,int n)
{
	eptr = (emp*)malloc(n*sizeof(emp));
}

void accept(emp * eptr,int n)
{
	printf("Enter Employee details: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&eptr[i].id);
		scanf("%f",&eptr[i].salary);
		gets(eptr[i].name);
	}
}

void display(emp * eptr,int n)
{
	printf("\nEmployee details: \n");
	for(int i=0;i<n;i++)
	{
		printf("Employee ID - %d\tEmployee Name - %s\t Employee Salary - %.2f",eptr[i].id, eptr[i].name,eptr[i].salary);
		printf("\n");
	}
}


void deallocate (emp * eptr,int n)
{
	for(int i=0;i<n;i++)
	{
		free(eptr);
	}
	free(eptr);
}
