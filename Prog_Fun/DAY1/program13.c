#include <stdio.h>

int main() {
    int number,table;
    
    for (int j=2;j<=5;j++)
    {
        printf("\nMultiplication table of %d\n",j);
        for (int i=1;i<=10;i++)
        {
            table=j*i;
            printf("%d\n",table);
        }
    }
    return 0;
}
