#include <stdio.h>

int func1(int array[])
{
    //main ke andar aur func1 me parameters same nei honge i mean ki main me arr[] hoga aur func1 me array[] hoga
    for (int i = 0; i <10; i++)
    {
        printf("The value at %d is %d\n",i,array[i]);
    }
    array[0]=382;
    //NOTE:->> if you change any value here,it gets reflected in main
    return 0;
}
void func2(int* ptr){
    for (int i = 0; i <10; i++)
    {
        // printf("The value at %d is %d\n",i,ptr[i]);
        printf("The value at %d is %d\n",i,*(ptr+i));
    }

    *(ptr + 2) = 678;
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // printf("The value at index 0 is %d\n",arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n",arr[0]);
    func2(arr);
    printf("\n");
    printf("\n");
    func2(arr);//value at index 2 is changed
    // printf("THE VALUE AT INDEX 3 IS: %d\n",arr[2]);
    return 0;
}