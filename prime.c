#include<stdio.h>

int main()
{
    int n;
    int isprime = 1;
    printf("enter the number\n ");
    scanf("%d",&n);
     for (int i = 0; i*i< n ; i++)
     {
         if(n%1==0){
            isprime = 0;
         }
     }
         if (isprime )
         {
            printf("the number %d is prime\n",n);

         }
        printf("the number %d is not prime",n); 
     
     
return 0;
}
