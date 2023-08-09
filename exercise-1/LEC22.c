#include <stdio.h>


void conversionPROGRAM()
{
    printf("Welcome to conversion program:\n");
    int num;
    printf("Press the desired number to use the conversion method\n");
    printf("a. Press 1 to use Km to Miles conversion\n");
    printf("b. Press 2 to use Inch to Foot conversion\n");
    printf("c. Press 3 to use cms to inches conversion\n");
    printf("d. Press 4 to use pound to Kgs conversion\n");
    printf("e. Press 5 to use inches to meters conversion\n");
    printf("e. Press 6 to use fahrenheit to celsius conversion\n");
    printf("f. Press 0 to exit\n");
    scanf("%d",& num);

    if (num==1)
    {

        float KM , MILES;
        printf("KM=");
        scanf("%f",&KM);
        MILES = KM * 0.621371;
        printf("Therefore %f Km in MILES is %f mile",KM,MILES);
    }



    else if(num==2)
    {

        float INCH,FOOT;
        printf("INCH=");
        scanf("%f",&INCH);
        FOOT = INCH * 0.0833333;
        printf("Therefore %f inch in foot is %f foot\n",INCH,FOOT);
    }



    else if(num==3)
    {
        float cms, inch;
        printf("cm=");
        scanf("%f",&cms);
        inch = cms * 0.393701;
        printf("Therefore %f cm in inch is %f inches\n",cms,inch);

    }

    else if(num==4)
    {
        float Pound , Kilogram;
        printf("Pound=");
        scanf("%f",&Pound);
        Kilogram = Pound * 0.453592;
        printf("Therefore %f Pound in Kilogram is %f Kgs",Pound,Kilogram);
    }

    else if(num==5)
    {
        float INCH,meters;
        printf("INCH=");
        scanf("%f",&INCH);
        meters = INCH * 0.0254;
        printf("Therefore %f inch in meters is %f meter\n",INCH,meters);
    }

    else if(num==6)
    {
        float C,F,G,H,RESULT;
        printf("F=");
        scanf("%f",&F);
        C = F - 32;
        G = C*5;
        H = G / 9 ;
        RESULT = H;
        printf("Therefore %f fahrenheit in celsius is %f C\n",F,RESULT);
    }
    
    else if(num==0)
    {
        printf("Thanks for using this program...");
    }
    
}

int main()
{
    conversionPROGRAM();
    return 0;
}

