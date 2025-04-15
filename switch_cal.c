#include<stdio.h>
int main(){
    int n;
    float a,b,r;
    printf("enter 2 number");
    scanf("%f %f",&a, &b);
    printf("opp no.\n=");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        /* code to add */
        r=a+b;
         printf("sum=%f",r);
        break;
    
    case 2:
        /* code to sub */
        r=a-b;
         printf("sub=%f",r);
        break;
    case 3:
        
        r=a*b;
         printf("prod=%f",r);
        break;
       
    case 4:
        /* code */
        if (b != 0) {
            r = a / b;
            printf("div=%f", r);
        } else {
            printf("Error: Division by zero is not allowed.");
        }
        break;
       
      default:
       printf("NA");
        break;
       }
        return 0;
       }
    
       