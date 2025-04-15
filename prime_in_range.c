#include<stdio.h>
int main()
{
    int i,j,n;
    printf("upper range=");
    scanf("%d",&i);
    printf("lower range=");
    scanf("%d",&j);
    n=j;
     while (n<=i)
     {
        if (n%2 != 0 )
        {
            printf("%d is a prime number\n",n);
        }
        else if (n==2)
        {
            printf("%d is prime number\n",n);

        }
        n++;
     }
     
return 0;
}