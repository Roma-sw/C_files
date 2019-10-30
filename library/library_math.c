#include <stdio.h>
#include <math.h>

int main(void){
    float x, rt, pw;
    printf("Enter a real number 'x'\n");    scanf("%f", &x);
    rt = sqrt(x);
    printf("%f\n", rt);
    pw = pow(x, 2);
    printf("%f\n", pw);
    return(0);
}

