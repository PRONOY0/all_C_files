#include <stdio.h>
#include <stdlib.h>
int main()
{
    // FILE *ptr = NULL;
    // ptr = fopen("myfile.txt","a+");
    // char c = fgetc(ptr);
    // printf("The character I read was %c\n",c);
    // c = fgetc(ptr);
    // printf("The character I read was %c\n",c);
    
    
    
    // char str[10];
    // fgets(str,9,ptr);
    // printf("The string is:->>%s\n",str);


    // fputc('character',file pointer);
    // fputc('o',ptr);
    // fputs(" This is harry & this is PRONOY\n",ptr);


    // fclose(ptr);



    //! MY PERSONEL LVL NOTES FOR MY UNDERSTANDING...
    
    FILE *ptr = NULL;
    
    //* (1) FOR R+
    // ptr = fopen("for_r_plus.txt","r+");
    // char string[20];
    // fputs("STRING YOU WANT TO ENTER", file pointer);
    // fputs("MY NAME IS PRONOY ROY",ptr);

    //* (2) FOR W+
    // ptr = fopen("for_w_plus.txt","w+");
    // char string[20];
    // fputs("MY NAME IS PRONOY ROY",ptr);

    //* (3) FOR A+
    // ptr = fopen("for_a_plus.txt","a+");
    // char string[34];
    // fputs("MY NAME IS PRONOY ROY",ptr);
    return 0;
}