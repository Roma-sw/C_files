#include <stdio.h>
int main(void)
{
    int i = 1, a, sum = 0;
    printf("Enter a number: ");    scanf("%d", &a);
    do {
        sum = sum + i;
        i++;
    }while( i <= a );
    printf("The sum total from 1 to %d is %d.\n", a, sum);
    return(0);
}
