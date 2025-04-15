#include<stdio.h>
int main(){
    int n;
    printf("month no.\n=");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        /* code */
        printf("jan day=31");
        break;
    
    case 2:
        /* code */
        printf("feb days=28 or 29 depends on year");
        break;
    case 3:
        /* code */
        printf("mar days=31");
        break;
       
    case 4:
        /* code */
        printf("Arp days=30");
        break;
       
    case 5:
        /* code */
        printf("may days=31");
        break;
       
    case 6:
        /* code */
        printf("mar days=30");
        break;
       
    case 7:
        /* code */
        printf("july days=31");
        break;
    case 8:
        /* code */
        printf("Aug days=31");
        break;
    case 9:
        /* code */
        printf("sep days=30");
        break;
    case 10:
        /* code */
        printf("Oct days=31");
        break;
    case 11:
        /* code */
        printf("Nov days=30");
        break;
    case 12:
        /* code */
        printf("dec days=31");
        break;

      default:
       printf("NA");
        break;
       }
        return 0;
       }
    
       