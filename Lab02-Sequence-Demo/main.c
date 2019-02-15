#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Enter x, N:");
    double x;
    int N;

    if (scanf("%lf %d", &x, &N) != 2) {
        printf("Invalid input\n");
        return -1;
    }
    /**
      Set ranges
    */
    double leftX = 0, rightX = 0.5;

    if (x < leftX || x > rightX) {
        printf("Incorrect %.3f\n", x);
        return -2;
    }

    double eps = 1.0e-5;
    //For efficient computing
    double a = x-sqrt(x), S = a;

    for (int n = 0; n <= N; ++n) {
        double q = x - sqrt(x);
        q = q*q*(2*n + 1)*(2*n + 1)/(2*(2*n + 3)*(n+1));
        a *=q;
        S += a;
    }

    S = M_PI/2 - S;
    printf("S = %.5f\n", S);

    double y = acos(x - sqrt(x));

    printf("y = %.5f\n", y);

    return 0;
}
