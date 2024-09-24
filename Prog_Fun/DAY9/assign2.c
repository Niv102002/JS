#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct book_details
{
	int id;
	char title[20];
	float price;
	char author[30];
}book;

void allocate (book *, int);
void accept (FILE *, book *, int);
void display (FILE *, book *,int);
//void modify (book *);

int main()
{
	FILE *fptr;
	book bptr;
	int ch,n;
	
	printf("Enter the number of books : ");
	scanf("%d",&n);
	
	allocate(&bptr,n);
	
	fptr = fopen("book.txt","w+");
	if (fptr==NULL)
	{
		printf("File not available");
		exit(0);
	}
	
	printf("\nFile opened.....\nwriting in file....");
	printf("\n\tBefore writing : %d",ftell(fptr));
	
	accept (fptr,&bptr,n);
	
	
	display (fptr,&bptr,n);
	
	/*modify (bptr,n);
	
	
	
	printf("\n\tAfter writing:%d",ftell(fptr));
	
	rewind(fptr);
	printf("\n\tAfter rewind:%d",ftell(fptr));
	
	printf("\nReading from file");
	
	fseek(fptr,sizeof(Emp)*2,SEEK_SET);
	fread(&e,sizeof(Emp),1,fptr);
	printf("\n%d %s\n\n",e.eid,e.name);
	fclose(fptr);*/
	
	
	return 0;
}


void allocate (book * bptr,int n)
{
	bptr = (book*)malloc(n*sizeof(book));
}

void accept (FILE * fptr, book * bptr,int n)
{
	while(n!=0)
	{
		printf("\nEnter Book ID, Book name, Book price and Book author : ");
		scanf("%d",&bptr->id);
		scanf("%f",&bptr->price);
		while(getchar()!='\n');
		fgets(bptr->title,20,stdin);
		fgets(bptr->author,20,stdin);
		bptr->title[strlen(bptr->title)-1]="\0";
		bptr->author[strlen(bptr->author)-1]="\0";
		fwrite(&bptr,sizeof(book),1,fptr);
		n--;
	}
}


void display (FILE * fptr, book * bptr,int n)
{
	while(fread(&bptr,sizeof(book),3,fptr)!=0)
	{
		printf("\n%d %s %f %s\n\n",bptr->id,bptr->title,bptr->price,bptr->author);
	}
}

 /*
void modify (book * bptr,int n)
{
	
}
*/

