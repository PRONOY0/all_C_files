#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50];
    char s2[50];
    char s3[100];
    printf("Enter your first friend name\n");
    gets(s1);
    printf("Enter your second friend name\n");
    gets(s2);
    // printf("%s is friend of %s\n",s1,s2);
    printf("%s",strcat(s1,s2));

    return 0;
}