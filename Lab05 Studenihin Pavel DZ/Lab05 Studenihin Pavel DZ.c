#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
#include<locale.h>
double fs(double x, double y, double z)
{
    double f;
    f = pow(y + pow(x - 1.0, 1.0 / 3.0), 0.25) / (fabs(x - y) * (pow(sin(z), 2.0) + tan(z)));
    return f;
}
int main()
{
    setlocale(LC_CTYPE, "RUS");
    double x, y, z, res;
    printf("¬ведите x =");
    scanf_s("%lf", &x);
    printf("x = %.6lf\n", x);

    printf("¬ведите y =");
    scanf_s("%lf", &y);
    printf(" y = %.6lf\n", y);

    printf("¬ведите z =");
    scanf_s("%lf", &z);
    printf(" z = %.6lf\n", z);
    res = fs(x, y, z);
    printf("f = %.5lf\n", res);
    
   
    system("pause");
    return 0;
}
