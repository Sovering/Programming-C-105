#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c;
    printf("Enter a, b, c: ");
    int r = scanf("%lf %lf %lf", &a, &b, &c);

    if (r != 3)
    {
        printf("Expected 3 args. Actual %d\n", r);
        return -1;
    }

    printf("%f %f %f\n", a, b, c);

    double d = b*b - 4 * a * c;

    if (d < 0) {
        char* fmt = "%.3f x^2 + %.3f x+ %.3f has no roots\n";
        printf(fmt,a,b,c);
    } else {
       double x1 = (-b - sqrt(d))/(2*a);
       double x2 = (-b + sqrt(d))/(2*a);
       char* fmt = "Roots [x1=%.4f, x2=%.4f]\n";
       printf(fmt, x1, x2);
    }

    return 0;
}
