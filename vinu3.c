// Program to print this pattern//
//              12345
//               1234
//                123
//                 12
//                  1

#include <stdio.h>
#include <conio.h>

int main()
{
        int i,j,k,n=5;

        for(k=1; k<=5; k++)
        {
            for(i=1; i<=k; i++)
                printf(" ");

            for(j=1; j<=n; j++)
                printf("%d",j);

            printf("\n");
            n--;

        }
}