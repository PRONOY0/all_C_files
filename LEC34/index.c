#include <stdio.h>
#include <string.h>

void printStr(char str1[]){
    int i=0;
    while(str1[i]!='\0'){
        printf("%c",str1[i]);
        i++;
    }
}
int main()
{
    //!1st way to create string
    // char str[] = {'h','a','r','r','y'};
    //without '\0' will give a garbage value after harry like this:==>> harry♀ a
    // char str[] = {'h','a','r','r','y','\0'};
    //with '\0' will not give a garbage value after harry like this:==>> harry
    // printStr(str);


    //!2nd way to create string
    // char str[6]="harry";

    char str[50]; 
    //?user input string
    gets(str);
    printf("using printf it's==>>%s\n",str);
    printf("using puts it's==>>\n");
    puts(str);
    return 0;
}