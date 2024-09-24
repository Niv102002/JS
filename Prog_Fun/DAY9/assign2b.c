#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct book_details
{
    int id;
    char title[20];
    float price;
    char author[30];
} book;

void allocate(book **, int);
void accept(FILE *, book *, int);
void display(FILE *, book *, int);
void modify(FILE *, book *, int);

int main()
{
    FILE *fptr;
    book *bptr;
    int ch, n;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    allocate(&bptr, n);

    fptr = fopen("book.txt", "w+");
    if (fptr == NULL)
    {
        printf("File not available");
        exit(0);
    }

    printf("\nFile opened.....\nWriting in file....\n");

    accept(fptr, bptr, n);
    rewind(fptr);  // Move file pointer to the beginning

    printf("\nDisplaying from file:\n");
    display(fptr, bptr, n);

    modify(fptr, bptr, n);
    
    rewind(fptr);
    printf("\nDisplaying after modification:\n");
    display(fptr, bptr, n);

    fclose(fptr);
    free(bptr);  // Free allocated memory

    return 0;
}


void allocate(book **bptr, int n)
{
    *bptr = (book *)malloc(n * sizeof(book));
    if (*bptr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
}


void accept(FILE *fptr, book *bptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Book ID :\n");
        scanf("%d", &bptr[i].id);
        printf("\nEnter Book price :\n");
        scanf("%f", &bptr[i].price);
        while (getchar() != '\n');  // To clear input buffer

        printf("Enter Book Title: ");
        fgets(bptr[i].title, 20, stdin);
        bptr[i].title[strcspn(bptr[i].title, "\n")] = '\0';  // Remove newline

        printf("Enter Book Author: ");
        fgets(bptr[i].author, 30, stdin);
        bptr[i].author[strcspn(bptr[i].author, "\n")] = '\0';  // Remove newline

        fwrite(&bptr[i], sizeof(book), 1, fptr);  // Write each book to the file
    }
}


void display(FILE *fptr, book *bptr, int n)
{
    rewind(fptr);  // Rewind file pointer to the beginning

    printf("\nBook Details:\n");
    for (int i = 0; i < n; i++)
    {
        fread(&bptr[i], sizeof(book), 1, fptr);
        printf("Book ID: %d\n", bptr[i].id);
        printf("Title: %s\n", bptr[i].title);
        printf("Price: %.2f\n", bptr[i].price);
        printf("Author: %s\n\n", bptr[i].author);
    }
}


void modify(FILE *fptr, book *bptr, int n)
{
    int book_id, found = 0;
    printf("\nEnter the Book ID to modify: ");
    scanf("%d", &book_id);

    // Loop through the file to find the book with the matching ID
    for (int i = 0; i < n; i++)
    {
        fread(&bptr[i], sizeof(book), 1, fptr);
        if (bptr[i].id == book_id)
        {
            found = 1;
            printf("\nBook found!\n");
            printf("Current Title: %s, Current Price: %.2f\n", bptr[i].title, bptr[i].price);

            // Get new title and price from the user
            printf("Enter new Title: ");
            while (getchar() != '\n');  // To clear input buffer
            fgets(bptr[i].title, 20, stdin);
            bptr[i].title[strcspn(bptr[i].title, "\n")] = '\0';  // Remove newline

            printf("Enter new Price: ");
            scanf("%f", &bptr[i].price);

            // Move file pointer back to the correct position
            fseek(fptr, -sizeof(book), SEEK_CUR);

            // Write the modified record back to the file
            fwrite(&bptr[i], sizeof(book), 1, fptr);
            printf("\nBook details updated successfully!\n");

            break;
        }
    }

    if (!found)
    {
        printf("Book with ID %d not found.\n", book_id);
    }
}
