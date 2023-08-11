#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int sum(int a, int b)
{
    return a+b;
}

void greethelloAndExecute(int (*fPtr)(int,int))
{
    printf("HELLO\n");
    printf("The sum of 5 and 7 is %d\n",fPtr(5,7));
}


void greetGMAndExecute(int (*fPtr)(int,int))
{
    printf("Good Morning User\n");
    printf("The sum of 5 and 7 is %d\n",fPtr(5,7));
}

int main(){
    int (*ptr)(int,int);
    ptr  = &sum;
    greetGMAndExecute(ptr);
    greethelloAndExecute(ptr);
    return 0;
}