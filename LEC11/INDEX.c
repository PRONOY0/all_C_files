#include<stdio.h>
int main(){
    int age;
    int marks;
    printf("Enter you age:\n");
    scanf("%d",&age);

    printf("Enter you marks:\n");
    scanf("%d",&marks);
    switch (age)
    {
    case 3: printf("The age is 3\n");
    switch (marks)
    {
    case 45:
        printf("Your marks are 45");
        break;
    
    default:
    printf("Your marks are not 45");
        break;
    }
    break;
    
    case 4:printf("The age is 4");
    break;

    case 19:printf("The age is 19");
    break;

    default:
    printf("Age is not 3,4 and not 19");
    }
    return 0;
}