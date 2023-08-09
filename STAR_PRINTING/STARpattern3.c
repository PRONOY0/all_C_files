#include<stdio.h>
int main(){
    for (int i = 0; i <=6 ; i++)
    {
        for (int j = 6; j>=i; j--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}
/*
print...

*******
******
*****
****
***
**
*

*/