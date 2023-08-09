#include<stdio.h>

void changeVALUE(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main(){
    int a = 34;
    int b = 74;
    printf("The value of a before is %d\n",a);
    printf("The value of b before is %d\n",b);
    changeVALUE(&a,&b);
    printf("The value of a after is %d\n",a);
    printf("The value of b after is %d\n",b);
    return 0;
}