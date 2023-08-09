// #include <stdio.h>
// #include <string.h>
// struct Student
// {
//     int id;
//     int marks;
//     char fav_char;
//     char name[34];
// }harry,ravi,shubham;//GLOBAL VARIABLES

// int main()
// {
// struct Student harry, ravi, Shubham;//LOCAL VARIABLES
//     harry.id = 34;
//     ravi.id = 20;
//     Shubham.id = 30;
//     Shubham.marks = 210;
//     harry.marks = 80;
//     ravi.marks = 180;

//     strcpy(harry.name,"HARIS ALI KHAN");
//     strcpy(Shubham.name,"SHUBHAM KUMAR");
//     harry.fav_char = 'p';
//     Shubham.fav_char = 'p';
//     ravi.fav_char = 'p';

//     printf("HARRY GOT %d marks\n", harry.marks);
//     printf("HARRY name is %s\n", harry.name);
//     printf("Shubham name is %s\n", Shubham.name);
//     printf("Shubham GOT %d marks\n", Shubham.marks);
//     return 0;
// }

/*
quiz:- print all the information of a given student

STRUCT IS LOCAL VARIABLE
*/

// QUIZ ANSWER:->>

#include <stdio.h>
#include <string.h>


struct STUDENT_INFORMATION
{
    int marks, id;
    char name[250];
    char fav_clg[34];
} S1, S2, S3, S4, S5;

void studentINFO()
{
    printf("WELCOME TO SCHOOL_INFORMATION\n");
    int num;
    printf("There are total 5 student press the number from 1 to 5 to print the information about them:\n");
    scanf("%d",&num);
    if (num == 1)
    {
        printf("The school-id of the student is:-%s\n",S1.id);
        printf("The name of the student is:-%s\n",S1.name);
        printf("The marks of %s is %d\n",S1.name,S1.marks);
    }

    else if (num == 2)
    {
        printf("The school-id of the student is:-%s\n",S2.id);
        printf("The name of the student is:-%s\n",S2.name);
        printf("The marks of %s is %d\n",S2.name,S2.marks);
    }
    else if (num == 3)
    {
        printf("The school-id of the student is:-%s\n",S3.id);
        printf("The name of the student is:-%s\n",S3.name);
        printf("The marks of %s is %d\n",S3.name,S3.marks);
    }
    else if (num == 4)
    {
        printf("The school-id of the student is:-%s\n",S4.id);
        printf("The name of the student is:-%s\n",S4.name);
        printf("The marks of %s is %d\n",S4.name,S4.marks);
    }
    else if (num == 5)
    {
        printf("The school-id of the student is:-%s\n",S5.id);
        printf("The name of the student is:-%s\n",S5.name);
        printf("The marks of %s is %d\n",S5.name,S5.marks);
    }
    else
    {
        printf("\n");
    }
}


int main()
{

    printf("Enter the student name of 1:\n");
    gets(S1.name);
    printf("Enter the student name of 2:\n");
    gets(S2.name);
    printf("Enter the student name of 3:\n");
    gets(S3.name);
    printf("Enter the student name of 4:\n");
    gets(S4.name);
    printf("Enter the student name of 5:\n");
    gets(S5.name);

    printf("\n");

    printf("Enter the student-id of %s\n",S1.name);
    scanf("%d",&S1.id);
    printf("Enter the student-id of %s\n",S2.name);
    scanf("%d",&S2.id);
    printf("Enter the student-id of %s\n",S3.name);
    scanf("%d",&S3.id);
    printf("Enter the student-id of %s\n",S4.name);
    scanf("%d",&S4.id);
    printf("Enter the student-id of %s\n",S5.name);
    scanf("%d",&S5.id);

    printf("\n");

    printf("Enter the marks of %s\n:",S1.name);
    scanf("%d",&S1.marks);
    printf("Enter the marks of %s\n:",S2.name);
    scanf("%d",&S2.marks);
    printf("Enter the marks of %s\n:",S3.name);
    scanf("%d",&S3.marks);
    printf("Enter the marks of %s\n:",S4.name);
    scanf("%d",&S4.marks);
    printf("Enter the marks of %s\n:",S5.name);
    scanf("%d",&S5.marks);

    studentINFO();

    return 0;
}