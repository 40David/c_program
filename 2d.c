#include<stdio.h>
int main()
{
    int i,j,m,n,a[100][100];
    printf("enter the dimension")
    scanf("%d %d",&m,&n);
    // read
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    //print
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d",a[i][j]);
        }
        
    }
    return 0;
}