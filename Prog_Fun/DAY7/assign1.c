#include<stdio.h>

typedef struct book_details
{
	int book_id;
	char book_title[20];
	float book_price;
}book;

void accept(book *, int);
void display(book *, int);
void calculate(book *, int);


int main()
{
	int i;
	printf("enter size : ");
	scanf("%d",&i);
	book book_arr[i];
	
	accept(book_arr,i);
	display(book_arr,i);
	calculate(book_arr,i);
	
	return 0;
}

void accept(book *book_arr,int size)
{
	printf("Enter Book details: ");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&book_arr[i].book_id);
		scanf("%f",&book_arr[i].book_price);
		gets(book_arr[i].book_title);
	}
}

void display(book *book_arr,int size)
{
	int i;
	printf("Book details: \n");
	for(i=0;i<size;i++)
	{
		printf("Book ID - %d\tBook Title - %s\tBook Price - %f\n\n",book_arr[i].book_id, book_arr[i].book_title, book_arr[i].book_price);
	}
}

void calculate(book *book_arr,int size)
{
	float final_price;
	float gst=0.18;
	
	for(int i=0;i<size;i++)
	{
		final_price=0;
		final_price = (book_arr[i].book_price+(gst*book_arr[i].book_price));
		//printf("%f\n",final_price);
		printf("Final price of book - %s with book ID - %d is %f\n\n",book_arr[i].book_title, book_arr[i].book_id,final_price);
	}
}
