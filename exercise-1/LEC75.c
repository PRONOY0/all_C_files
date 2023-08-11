#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double PI = 3.14; 
double Edistance(double x1, double y1, double x2, double y2)
{
    double a = (x2 - x1);
    double b = (y2 - y1);
    double c = pow(a, 2);
    double d = pow(b, 2);
    double e = (c + d);
    double f = pow(e, 0.5);
    return f;
}

float areaOfCircle(double x1, double y1, double x2, double y2, double (*Fptr)(double, double, double, double))
{
    printf("%lf\n",Fptr(x1,y1,x2,y2)*Fptr(x1,y1,x2,y2));
    printf("Area of circle is %.2f\n", PI * ( Fptr(x1,y1,x2,y2) * Fptr(x1,y1,x2,y2) ) );
}
int main()
{
    double x1, x2, y1, y2;
    double (*ptr)(double, double, double, double);
    ptr = &Edistance;
    printf("Enter the coordinate value of x1,y1\n");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinate value of x2,y2\n");
    scanf("%lf %lf", &x2, &y2);
    printf("The distance between 2 point is %lf\n", Edistance(x1, y1, x2, y2));
    areaOfCircle(x1, y1, x2, y2, ptr);
    return 0;
}
