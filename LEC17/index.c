#include <stdio.h>
int main()
{
    label:
    printf("We are inside label\n");
    goto end;
    printf("hello world\n");
    goto label;
    end:
        printf("we are at end\n");

    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i);
        int num;
        for (int j = 0; j < 8; i++)
        {
            printf("enter 0 to exit\n");
            scanf("%d", &num);
            if(num==0){
                goto end;
            }
        }
        
    }
    end:
    
    return 0;
}

//Please avoid this goto to avoid confusion