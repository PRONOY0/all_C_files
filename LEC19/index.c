#include <stdio.h>
#include<math.h>

int sum(int a, int b);

void printstar(int n)
{
    // with arguments and without return value...
    for (int i = 0 ; i<n ; i++)
    {
    printf("%c", '*');
    }
    
}

int takenumber()
{
    // without arguments and with return value
    int i;
    printf("enter a number");
    scanf("%d",&i);
    return i;
}

int subtract()
{
    // without arguments and without return value 
    int p,q;
    printf("ENTER THE TWO NUMBER:");
    scanf("%d %d\n", &p, &q);
    int r = p - q;
    printf("The difference b/w the two numbers are %d ",r);
}


int main()
{
    // int a , b, c;
    // a = 9;
    // b = 87;
    // c=sum(a,b);
    // printstar(7);
    // printf("THE SUM IS %d\n",c);
    // c=takenumber();

    subtract();
    return 0;
}


int sum(int a , int b)
{
    // with arguments and with return value
    return a+b;
}
