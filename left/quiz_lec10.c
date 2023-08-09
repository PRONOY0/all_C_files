//Lec10 quiz
#include<stdio.h>
int main(){
    char a,b,d;
    printf("Did you passed Science Exam \n Did you passed Maths Exam \n Did you passed Both exam \n");
    scanf("%c %c %c",&a,&b,&d);

    if(a=='y')
    {
        printf("Congrats you've cleared science exam, You've won Rs.15");
    }

    else if(b=='y')
    {
        printf("Congrats you've cleared maths exam, You've won Rs.15");
    }

    else if(d=='y')
    {
        printf("Congrats you've cleared both exam, You've won Rs.45");
    }

    else
    {
        printf("Better luck next time!");
    }

    return 0;
}