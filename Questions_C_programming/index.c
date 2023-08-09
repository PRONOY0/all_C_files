//LEAP YEAR PROGRAM
#include<stdio.h>
#include<string.h>
int main(){
    int year;
    printf("Enter year for leap year check:\n");
    scanf("%d",&year);

    int leapYEAR;
    int a1 = leapYEAR = year + 1;
    int a2 = leapYEAR = year + 2;
    int a3 = leapYEAR = year + 3;
    int a4 = leapYEAR = year + 4;
    int a5 = leapYEAR = year + 5;
    int a6 = leapYEAR = year + 6;
    int a7 = leapYEAR = year + 7;
    int a8 = leapYEAR = year + 8;
    int a9 = leapYEAR = year + 9;


    if(year%4==0){
        printf("This is a leap year");
    }


    else if(a1%4==0){
        printf("This is not a leap year \n");
        printf("The leap year is after 1year that is on %d",a1);
    }


    else if(a2%4==0){
        printf("This is not a leap year \n");
        printf("The leap year is after 2year that is on %d",a2);
    }


    else if(a3%4==0){
        printf("This is not a leap year \n");
        printf("The leap year is after 3year that is on %d",a3);
    }


    else if(a4%4==0){
        printf("This is not a leap year \n");
        printf("The leap year is after 4year that is on %d",a4);
    }

    else if(a5%4==0){
        printf("This is not a leap year \n");
        printf("The leap year is after 5year that is on %d",a5);
    }

    else if(a6%4==0){
        printf("This is not a leap year \n");
        printf("The leap year is after 6year that is on %d",a6);
    }

    else if(a7%4==0){
        printf("This is not a leap year \n");
        printf("The leap year is after 7year that is on %d",a7);
    }

    else if(a8%4==0){
        printf("This is not a leap year \n");
        printf("The leap year is after 8year that is on %d",a8);
    }

    else if(a9%4==0){
        printf("This is not a leap year");
        printf("The leap year is after 9year that is on %d",a9);
    }
    return 0;
}