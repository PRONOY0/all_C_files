#include<stdio.h>
#include<string.h>

union student
    {
        int id;
        int marks;
        char fav_char;
        char name[34];
    };

int main(){
    union student S1;
    S1.fav_char = 'u' ;
    strcpy(S1.name,"PRONOY ROY");
    S1.id = 01 ;
    S1.marks = 45 ;
    printf("The name is %s\n",S1.name);
    printf("The id is %d\n",S1.id);
    printf("The marks is %d\n",S1.marks);
    printf("The fav_char is %c\n",S1.fav_char);
    // union student
    // {
        
    // };

    
    return 0;
}