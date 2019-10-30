#include <stdio.h>
double average ( int a, int b, int c);
int main(void)
{
    int x, y, z;
    double ave;
    printf("Enter 3 numbers.\n");
    printf("NUMBER A: ");    scanf("%d", &x);
    printf("NUMBER B: ");    scanf("%d", &y);
    printf("NUMBER C: ");    scanf("%d", &z);

    ave = average(x, y, z);

    printf("The average is %.1f .\n", ave);
    return(0);
}
double average( int a, int b, int c )
{
    return( (a+b+c) / 3.0 );
}
