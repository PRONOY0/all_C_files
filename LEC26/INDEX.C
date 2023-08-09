#include <stdio.h>
int main()
{
    int a = 76;
    int *ptra = &a ;
    printf("the address of pointer to a is %x\n", &ptra);
    printf("the address of a is %x\n", &a);
    printf("the address of a is %x\n", ptra);
    printf("the value of a is %d\n", *ptra);
    printf("the value of a is %d\n", a);


    int *ptr2 = NULL;
    printf("the address of some garbage is %x\n",ptr2);
    return 0;
}
/*
& it represents the address
and * represents the value of a 
*/