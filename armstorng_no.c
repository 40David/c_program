#include<stdio.h>
#include<math.h>
int main(){
    int n,temp,sum,o;
    printf("enter the number");
    scanf("%d",&n);
    o=n;
    sum=0;
    while (n!=0)
    {
       temp=n%10;
       sum=sum+pow(temp,3);
       n=n/10;
    }
    if (sum==o)
    {
        printf("%d is a armstorng number",o);
    }
    else{  printf("%d is not a armstorng number",o);
    }

    return 0;
}