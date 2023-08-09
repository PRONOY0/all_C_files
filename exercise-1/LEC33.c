#include <stdio.h>

int main()
{
    int i,j,n;
    // printf("ENTER:\n");
    // scanf("%d",&n);
    
    
    for( i = 0 ; i<=6 ; i++)
    {

    for( j = 0 ; j<=i ; j++)
    {
    printf("*");
    }

    printf("\n");
    }
    for( i = 0 ; i<=6 ; i++)
    {

    for( j = 6 ; j>=i ; j--)
    {
    printf("*");
    }

    printf("\n");
    }


    
    return 0;
}