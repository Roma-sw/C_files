#include <stdio.h>
int area_triangle( int b, int h )
{
    int s;
    s = b * h / 2;
    return( s );
}
int main(void)
{
    int base, height, area;
    printf("Base: ");    scanf("%d", &base);
    printf("Height: ");    scanf("%d", &height);
    area = area_triangle(base, height);
    printf("The area of the triangle(base=%d, height=%d) is %d.\n", base, height, area);
    return(0);
}
