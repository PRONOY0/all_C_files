#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    //fgets,fgetc,fputc,fputs
    // FILE *ptr = fopen("myfile.txt","w");


    //! fputc('character',file pointer);
    // fputc('c',ptr);
    //! fputs("STRING",file pointer);
    // fputs("THIS IS A NO-0s STRING",ptr);
    //! fgetc(file pointer);
    FILE *ptr = fopen("myfile.txt","r");
    // char s = fgetc(ptr);
    // printf("THE CHARACTER IS %c\n",s);

    //? To print the other characters we use this method
    // s = fgetc(ptr);
    // printf("THE CHARACTER IS %c\n",s);
    // s = fgetc(ptr);
    // printf("THE CHARACTER IS %c\n",s);
    // s = fgetc(ptr);
    // printf("THE CHARACTER IS %c\n",s);

    //! fgets(String_name_in which you want to store the string for read purpose,n it means upto how many character you wanna read,file pointer);
    // char string[34];
    // fgets(string,25,ptr);
    // printf("THE STRING IS %s\n",string);
    return 0;
}