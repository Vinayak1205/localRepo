// Program to print the pattern
//                  1
//                 121
//                12321
//               1234321
//              123454321

#include <stdio.h>
#include <conio.h>

int main()
{
            int i,j,k,n=1,m;

            for(k=1; k<=5; k++)
            {

                for(i=5; i>=k; i--)
                    printf(" ");

                m=1;

                for(j=1; j<=n; j++)
                {
                    if(j<k)
                    {
                        printf("%d",m);
                        m++;
                    }

                    else
                    if(j==k)
                    {
                        printf("%d",m);
                        m--;
                    }

                    else
                    {
                        printf("%d",m);
                        m--;
                    }

                    printf("\n");
                    n++;


                }

            }

            return 0;
}