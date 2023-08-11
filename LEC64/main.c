#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){


    FILE *ptr = NULL;
    // char string[74];


    //*Reading a file
    // ptr = fopen("myfile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content of this file has %s\n",string);

    //?Writing a file
    ptr = fopen("myfile.txt","a");
    char string[74] = "\nTHIS IS NEW LINE I ADDED TO THE FILE using append";
    fprintf(ptr,"%s",string);
    return 0;
}

//! r = read mode
//! w = writing mode
//! rb = reading in binary mode