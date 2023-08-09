#include<stdio.h>
int main(){
    // int  a =34;
    // int* ptra = &a;
    // printf("%d\n",*ptra);
    // printf("%d\n",a);
    // printf("%d",ptra+1);

    int arr[] = {1,2,3,4,5,6,67};
    // printf("The address of first element of array is %d\n",&arr[0]);
    // printf("The address of first element of array is %d\n", arr);
    // printf("The address of second element of array is %d\n", &arr[1]);
    // printf("The address of second element of array is %d\n", arr+1);
    // printf("The address of third element of array is %d\n", &arr[2]);
    // printf("The address of third element of array is %d\n", arr+2);
    // printf("\n");
    // printf("The value of first element of array is %d\n",arr[0]);
    // printf("The value of first element of array is %d\n",*(arr));
    // printf("The value of second element of array is %d\n", arr[1]);
    // printf("The value of second element of array is %d\n", *(arr+1));
    // printf("The value of third element of array is %d\n", arr[2]);
    // printf("The value of third element of array is %d\n", *(arr+2));


    //TO PRINT ADDRESS
    //1.
    printf("THE ADDRESS OF 1st element of array is %d\n",&arr[0]);
    //2.
    printf("THE ADDRESS OF 2nd element of array is %d\n",arr);
    //3.
    printf("THE ADDRESS OF 3rd element of array is %d\n",&arr[1]);
    //4.
    printf("THE ADDRESS OF 3rd element of array is %d\n",arr+1);

    //TO PRINT VALUE
    //1.
    printf("THE VALUE OF 1st element of array is %d\n",arr[0]);
    //2.
    printf("THE VALUE OF 2nd element of array is %d\n",*arr);
    //3.
    printf("THE VALUE OF 3rd element of array is %d\n",arr[1]);
    //4.
    printf("THE VALUE OF 3rd element of array is %d\n",*(arr+1));
    //5.
    printf("THE VALUE OF 3rd element of array is %d\n",*(&arr[1]));


    //arr[0]=arr
    //arr[1]=arr+1
    return 0;
}