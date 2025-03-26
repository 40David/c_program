#include<stdio.h>
int main()
{
    int sum,rem,num;
    sum=0;
    printf("enter the nuumber");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;

     }
     printf("sum= %d",sum);
     return 0;

}