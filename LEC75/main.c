#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i, a = 0;
    int *i2;
    while (i < 4555)
    {
        printf("WELCOME TO CODE WITH HARRY\n");
        i2 = malloc(3444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }

        i++;
        free(i2);//without this we will encounter a situation of memory leak
    }
    return 0;
}