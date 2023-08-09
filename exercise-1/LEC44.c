#include<stdio.h>
#include<string.h>

struct drivers
{
    char first_name[50];   
    char last_name[50];   
    int Kms;
    char DRIVING_LICENSE[100];
    char Route[100];
}dr1,dr2,dr3;


int main(){
    printf("Welcome to DRIVERS programming\n");
    int num;
    printf("Enter any number from 1 to 3\n");
    scanf("%d",&num);
    if (num==1)
    {
        printf("Enter your first Name\n");
        scanf("%s",&dr1.first_name);

        printf("Enter your last Name\n");
        scanf("%s", &dr1.last_name);

        printf("Enter your DRIVING_LICENSE\n");
        scanf("%s",&dr1.DRIVING_LICENSE);

        printf("Enter your Route\n");
        scanf("%s",&dr1.Route);

        printf("Enter your Kms\n");
        scanf("%d",&dr1.Kms);
    }


    else if (num==2)
    {
        printf("Enter your first Name\n");
        scanf("%s",&dr2.first_name);

        printf("Enter your last Name\n");
        scanf("%s", &dr2.last_name);

        printf("Enter your DRIVING_LICENSE\n");
        scanf("%s",&dr2.DRIVING_LICENSE);

        printf("Enter your Route\n");
        scanf("%s",&dr2.Route);

        printf("Enter your Kms\n");
        scanf("%d",&dr2.Kms);
    }


    else if (num==3)
    {
        printf("Enter your first Name\n");
        scanf("%s",&dr3.first_name);

        printf("Enter your last Name\n");
        scanf("%s", &dr3.last_name);

        printf("Enter your DRIVING_LICENSE\n");
        scanf("%s",&dr3.DRIVING_LICENSE);

        printf("Enter your Route\n");
        scanf("%s",&dr3.Route);

        printf("Enter your Kms\n");
        scanf("%d",&dr3.Kms);
    }

    else
    {
        return 0;
    }
    
    int waiting_list;
    printf("ENTER YOUR TOKEN\n");
    scanf("%d",&waiting_list);

    if (waiting_list==1)
    {
        printf("The Name of the driver is %s\n",strcat(dr1.first_name , dr1.last_name));   
        printf("The driving-license is %s\n",dr1.DRIVING_LICENSE);   
        printf("The Kms driver has travelled is %d\n",dr1.Kms);   
        printf("The Route of the driver is %s\n",dr1.Route);   
    }

    else if (waiting_list==2)
    {
        printf("The Name of the driver is %s\n",strcat(dr2.first_name , dr2.last_name));   
        printf("The driving-license is %s\n",dr2.DRIVING_LICENSE);   
        printf("The Kms driver has travelled is %d\n",dr2.Kms);   
        printf("The Route of the driver is %s\n",dr2.Route);   
    }
    
    else if (waiting_list==3)
    {
        printf("The Name of the driver is %s\n",strcat(dr3.first_name,dr3.last_name));   
        printf("The driving-license is %s\n",dr3.DRIVING_LICENSE);   
        printf("The Kms driver has travelled is %d\n",dr3.Kms);   
        printf("The Route of the driver is %s\n",dr3.Route);   
    }
    else{
        printf("PLEASE ENTER YOUR INFORMATION\n");
    }
    return 0;
};