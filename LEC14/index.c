//WHILE-LOOP

#include<stdio.h>
int main(){
    int i;
    i=0;
    while (i<54)
    {
        printf("%d\n",i);
        i++;
    }
    
    do
    {
        printf("%d\n",i);
        i++;
    }while (i<54);
    
    return 0;
}