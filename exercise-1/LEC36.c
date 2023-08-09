//REVERSE ARRAY

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    char s1[n];
    for (int i=0 ; i<=n ; i++) 
    {
        scanf("%d",&s1[i]);
    }
    
    for (int j=n; j>=0 ; j--) 
    {
        printf(" %d",s1[j]);
    }
}