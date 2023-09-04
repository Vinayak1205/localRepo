#include <stdio.h>
#include <conio.h>

int main()
{
        int i,j,k,n=1;

        for(k=1; k<=5; k++)
        {
            for(i=5; i>=k; i--)
                printf(" ");

            for(j=1; j<=n; j++)
                printf("*");

            printf("\n");
            n+=2;
        }

}