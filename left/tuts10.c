//if-else statements
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("You have entered %d as your age \n",age);
    if(age>=18){
        printf("Hence, You can vote");
    }
    else if(age>10){
        printf("your age is between 10 to 18");
    }
    else{
        printf("Sorry, You cannot vote");
    }
    return 0;
}