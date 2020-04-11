#include <stdio.h>
#include <math.h>
int main()
{

    double PI =  3.1415926;
    double x, result;
    x =  -0.5;
    result = acos(x);
    printf("Inverse of cos(%.2f) = %.2lf in radians\n", x, result);
    result = acos(x)*180/PI;
    printf("Inverse of cos(%.2f) = %.2lf in degrees\n", x, result);

}
