#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int a = 124;
    int *ptr; //!This is a wild pointer
    // *ptr = 34;//? This is not a good thing to do
    ptr = &a;//? This is not a good thing to do
    printf("The value of a is %d\n",*ptr);
    return 0;
}