#include<stdio.h>
int main(){
    //!NULL POINTER
    //* A null pointer is a pointer that points to NULL(nothing)
    int a = 10;
    int *ptr = NULL;
    // printf("THE VALUE OF ptr is %d",*ptr);
    ptr = &a;
    // printf("THE VALUE OF ptr is %d",*ptr);
    return 0;
}