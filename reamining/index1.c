// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
// 	/*
//     two numbers of int data type
//     two numbers of float data type
//     output = their sum
//    (1) total 4 variables:-- two of int and other two of float
//    (2) read 2 lines of input
//    (3) Print the sum and difference of two int variable on a new line.
//    (4) Print the sum and difference of two float variable rounded to one decimal place on a new line.
//     */
//     int a,b;
//     float d,e;

//     scanf("%d %d", &a, &b);
//     scanf("%f %f", &d, &e);
//     printf("%d %d\n", a+b, a-b);
//     printf("%.1f %.1f",d+e,d-e);
//     return 0;
// }


#include <stdio.h>

int main(void) {
        int N,X,Y;
        scanf("%d  %d  %d",&N,&X,&Y);
        int freeSpace = (X+(Y*2));
        if(freeSpace>=N){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
	// your code goes here
	return 0;
}

