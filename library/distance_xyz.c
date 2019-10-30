#include <stdio.h>
#include <math.h>

double calc(double x1, double y1, double z1, double x2, double y2, double z2){
    return(sqrt(pow(x1 - x2, 2.0)+pow(y1 - y2, 2.0)+pow(z1 - z2, 2.0)));
}

int main(void){
    double x1, y1, z1, x2, y2, z2, result;
    printf("Enter X1\n");    scanf("%lf", &x1);
    printf("Enter Y1\n");    scanf("%lf", &y1);
    printf("Enter Z1\n");    scanf("%lf", &z1);
    printf("Enter X2\n");    scanf("%lf", &x2);
    printf("Enter Y2\n");    scanf("%lf", &y2);
    printf("Enter Z2\n");    scanf("%lf", &z2);
    result = calc(x1, y1, z1, x2, y2, z2);
    printf("Distance from(%.0f, %.0f, %.0f) to (%.0f, %.0f, %.0f) is %f.\n", x1, y1, z1, x2, y2, z2, result);
    return(0);
}
