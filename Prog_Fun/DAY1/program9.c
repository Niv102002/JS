#include <stdio.h>

int main() {
    int number,table;
    printf("Enter number for multiplication table : ");
    scanf("%d",&number);
    printf("Multiplication table of %d\n",number);
    for (int i=1;i<=10;i++)
    {
        table=number*i;
        printf("%d\n",table);
    }
    return 0;
}
