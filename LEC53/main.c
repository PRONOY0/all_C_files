#include<stdio.h>
int main(){
    //!NULL POINTER
    //* A null pointer is a pointer that points to NULL(nothing)
    int a = 34;
    int* ptr = &a;


    if (ptr!=NULL)
    {
    printf("THE address of a is %d\n",*ptr);
    }


    else
    {
        printf("The pointer is a null pointer and cannot be dereferenced\n");
    }

    
    //?The address of a is 0
    //!There's a huge difference b/w void pointer and null pointer
    return 0;
}