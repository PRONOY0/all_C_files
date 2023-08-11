#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void greet()
{
    printf("hello world my user good morning\n");
}

int sum(int a , int b)  
{
    return a + b;
}
int main(){
    printf("The sum of 1 and 2 is %d\n",sum(1,2));
    //Testing the function
    int (*fPtr) (int,int);
    //? ek aisa function hoga joki integer return karega aur 2 integer leta hai
    fPtr = &sum;//fPtr ab function ko point karega
    int d = (*fPtr)(4,6); //! (*pointer_name) sey value milti hai
    printf("The value of d is %d\n",d);
    return 0;
}