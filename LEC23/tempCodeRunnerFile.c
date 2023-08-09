#include <stdio.h>
int main()
{
    int marks[4];
    // marks[0]=34;
    // marks[1]=24;
    // marks[2]=64;
    // marks[3]=54;

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of the array",i);
        scanf("%d ",&marks[i]);
        /* code */
    }
    
    for (int i = 0; i < 4; i++)
    {
    printf("marks of student %d is %d\n",i,marks[i]);
    }
    
    return 0;
}
