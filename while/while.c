#include <stdio.h>
int main(void)
{
    int i, x, sum;
    printf("Enter a number: : ");
    scanf("%d", &x);
    i = 0; sum = 0;
    while( i <= x){
        sum += i;
        i++;
    }
    printf("The sum total from 1 to %d is %d.\n", x, sum);
    return (0);
}