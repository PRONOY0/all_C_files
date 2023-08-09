#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Dynamic Memory Allocation
    // ABC Pvt Ltd. manages employee records of other companies.
    // Employee Id can be of any length and it can contain any character
    // For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
    // Then, you have to take employee id as an input and display it on screen. 
    // Store the employee id in a character array which is allocated dynamically.
    // You have to create only one character array dynamically
// EXAMPLE:
    // Employee 1:
    // Enter no of characters in your eId
    // 45
    // Dynamically allocate the character array.
    // take input from user 

    // Employee 2:
    // Enter no of characters in your eId
    // 4
    // Dynamically allocate the character array.
    // take input from user 

    // Employee 3:
    // Enter no of characters in your eId
    // 9
    // Dynamically allocate the character array.
    // take input from user 
    
    // int* ptr,length;
    // printf("Enter no of characters in your eId\n");
    // scanf("%d",&length);
    // ptr = (int*) malloc (length * sizeof(char));
    
    // printf("Enter your Employee-ID\n");
    // scanf("%s\n",ptr);
    // printf("Your Employee Id is %s",ptr);
    // return 0;
    int n;
    printf("How many employees Id you want to store\n");
    scanf("%d",&n);
    
    int* ptr,length;
    printf("Employee 1:\n");
    printf("Enter no of characters in your eId\n");
    scanf("%d",&length);
    ptr = (int*) malloc (length * sizeof(char));
        
    printf("Enter your Employee-ID\n");
    scanf("%s\n",ptr);
    printf("Your Employee Id is %s\n",ptr);


    int* ptr1,length1;
    printf("Employee 1:\n");
    printf("Enter no of characters in your eId\n");
    scanf("%d",&length1);
    ptr1 = (int*) malloc (length1 * sizeof(char));
        
    printf("Enter your Employee-ID\n");
    scanf("%s\n",ptr1);
    printf("Your Employee Id is %s\n",ptr1);


    int* ptr2,length2;
    printf("Employee 1:\n");
    printf("Enter no of characters in your eId\n");
    scanf("%d",&length2);
    ptr2 = (int*) malloc (length2 * sizeof(char));
        
    printf("Enter your Employee-ID\n");
    scanf("%s\n",ptr2);
    printf("Your Employee Id is %s\n",ptr2);

    return 0;
}
