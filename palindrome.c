#include<stdio.h>
#include<string.h>
int main(){
    int n,o,temp,p;
    printf("enter the number ");
    scanf("%d",&n);
    o=n;
    p=0;
    while (n!=0)
    {
        temp=n%10;
        p=p*10+temp;
        n=n/10;
        printf("%d\n %d \n%d\n",n,temp,p);
    }
    if (o==p)
    {
        printf("the number is palindrome");

    }
    else
    {
        printf("gone");
    }
    
    
return 0;

}