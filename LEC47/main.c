#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

    //! MALLOC():-Memory allocation

    //* it reserves a block of memory with the given amount of bytes.

    //* the return value is a void pointer to the allocated space.

    //* if the space is insufficient allocation of memory fails and it returns a NULL pointer.

    //* all the values at allocated memory are initialized to garbage memory.

    // int *ptr, n;
    // printf("ENTER THE SIZE OF THE ARRAY YOU WANT TO CREATE\n");
    // scanf("%d", &n);
    // ptr = (int *)malloc(n * sizeof(int));

    // for (int i = 0; i < n; i++)
    // {
    //     printf("ENTER THE VALUE NO %d OF THIS ARRAY\n", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("THE VALUE OF  %d IS %d\n", i, ptr[i]);
    // }

    //! CALLOC():- Contiguous allocation

    //*it reserves n blocks of memory with the given amount of bytes.

    //*The return values is a void pointer to the allocated space.That's why we need to give then type of data that should be used during allocation.

    //* if the space is insufficient allocation of memory fails and it returns a NULL pointer.

    //*all the values at allocated memory are initialized to 0.

    int *ptr, n;
    printf("ENTER THE SIZE OF THE ARRAY YOU WANT TO CREATE\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n,sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE VALUE NO %d OF THIS ARRAY\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("THE VALUE OF  %d IS %d\n", i, ptr[i]);
    }


    //! REALLOC();- Re allocation

    //*if the dynamically allocated memory is insufficient we can change the size of previously allocated memory using realloc() function.

    //* if ptr* point to 4 block memory from heap but if it's found to be insufficient then we can use realloc to increase the size of the previouly allocated memory.

    //*for eg:- 36bytes is allocated but we want more then we can use realloc()
  
    printf("ENTER THE SIZE OF THE ARRAY YOU WANT TO CREATE\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr,n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE VALUE NO %d OF THIS ARRAY\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("THE VALUE OF  %d IS %d\n", i, ptr[i]);
    }


    //! Free():- free

    //*if the dynamically allocated memory is not required anymore we can free it using free function.

    //*This will free the memory being used by the program in the heap.

    free(ptr);
    //? free the array in b/w the program and also take the value from the program
    return 0;
}

