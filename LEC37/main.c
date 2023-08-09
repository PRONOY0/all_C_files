#include <stdio.h>
#include <string.h>


// typedef struct student
// {   
//     int id;
//     int marks;
//     char fav_char;
//     char name[34];
// }std;

int main()
{
    int c = 550;
    typedef int* INTptr;
    INTptr  a,b;
    //int* a,b; will create pointer only of variable a not b
    a = &c;
    b = &c;
    printf("VALUE OF A IS %d\n",*a);
    printf("VALUE OF B IS %d\n",*b);
    // typedef<previous_name> <alias_name>;
    // typedef unsigned long ul;
    // typedef int integer;
    // ul l1,l2,l3;
    // integer a =50;
    // printf("Value of a is %d",a);

    // std S1,S2;
    // S1.id = 56;
    // S2.id = 16;
    // printf("THE ID OF S1 IS %d",S1.id);
    // printf("THE ID OF S2 IS %d",S2.id);
    return 0;
}