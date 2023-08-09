#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "harry";
    char s2[] = "ravi";
    char s3[50];
    //it gives the difference of s1 and s2
    //if in s1 the character comes first as compared to s2 in ASCII value then it will return -1
    //if in s1 the character comes last as compared to s2 in ASCII value then it will return 1
    //if in s1 the character comes equal as compared to s2 in ASCII value then it will return 0
    printf("The strcmp for s1, s2 returns %d\n",strcmp(s1,s2));
    // puts(strcat(s1,s2));
    // printf("The length of s1 is %d\n",strlen(s1));
    // printf("The length of s2 is %d\n",strlen(s2));
    // printf("The reversed string s1 is %s\n",strrev(s1));
    // printf("The reversed string s1 is %s\n",strrev(s2));
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    return 0;
}