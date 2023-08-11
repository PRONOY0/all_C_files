#include<stdio.h>
#include<stdlib.h>

int* myfuncdangling()
{
    int a =34;
    int b = 365;
    int sum = a + b;
    return &sum;
}


int main(){
    //! case 1: De allocation of a memory block
    // int *ptr = (int *)malloc(7 * sizeof(int));
    // ptr[0]=34;
    // ptr[1]=34;
    // ptr[2]=36;
    // ptr[3]=64;
    // free(ptr);//*The ptr is now dangling pointer

    //! case 2: Function returning local variable address
    int *ptr = myfuncdangling();


    //! case 3 : If a variable goes out of scope
    int * danglingptr3;
    {
        int a = 14;
        danglingptr3 = &a;
    }
    //Here variable a goes out of scope which means danglingptr3 is pointing to
    // a location which is freed and hence danglingptr3 is now a dangling pointer
    return 0;
}