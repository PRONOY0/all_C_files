#include<stdio.h>

// int func1()
// {
//     int a = 5;
//     a++;
//     return a;
// }

int func1(int a){
    return 34;
}


int main(){
    //*those variables which are enclosed within function or block are local
    //*variables.

    //?those variables which are declared outside the main are global
    //?variables.

    //! local variables has more preference than global variables
    //! (if the variables name are same)






    //*STATIC VARIABLES IN C
    //! static variables are variables which have a property of preserving
    //! their values even when they go out of scope.
    //! static variables are initialized to 0 if not initialized explicitly
    //? static int a = func1(); it will give error 

    //!...< WORK OF STATIC >...
    // int a1;
    // printf("%d",func1()); //* OUTPUT=6 
    // printf("\n");
    // printf("%d",func1()); //* OUTPUT=7 it remember it's old value.
    // a1=func1();



    // //!...<WITHOUT STATIC >...
    // int a1;
    // printf("%d",func1()); //* OUTPUT=6 
    // printf("\n");
    // printf("%d",func1()); //* OUTPUT=6 it doesn't remember it's old value.
    // a1=func1();










      

    int p=5;
    func1(p);
    printf("%d",func1(p));









    return 0;
}