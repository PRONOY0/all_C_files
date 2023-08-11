#include<stdio.h>
int main(int argc, char const *argv[])
{
    //! The default value of argc is 1
    printf("THE VALUE OF ARGC IS %d\n",argc);
    for (int i = 0; i < argc ; i++)
    {
        printf("This argument at index number %d has value of %s\n",i,argv[i]);
    }
    scanf("ENTER THE NUMBER OF ARGUMENTS YOU WANT:%d\n",argc);
   
    
    return 0;
}
