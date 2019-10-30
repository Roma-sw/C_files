#include <stdio.h>
int minimum(int a, int b,int  c)
{
    int min;
    if(a < b){
        if(a < c){
            min = a;
        }else{
            min = c;
        }
    }else{
        if(b < c){
            min = b;
        }else{
            min = c;
        }
    }
    return( min );
}
int main(void)
{
    int x, y, z, r;
    printf("Enter 3 numbers\n");
    printf("NUMBER A: ");    scanf("%d", &x);
    printf("NUMBER B: ");    scanf("%d", &y);
    printf("NUMBER C: ");    scanf("%d", &z);
    r = minimum(x, y, z);
    printf("The minimum number is %d.\n", r);
    return(0);
}
