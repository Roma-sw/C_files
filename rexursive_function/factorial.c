#include <stdio.h>
int fact (int x)
{
    if (x == 0)
        return(1);
    else
        return(x * fact(x-1) );
}
int main (void)
{
    int x, r;
    printf("Enter a number: ");    scanf("%d", &x);
    r = fact(x);
    printf("Factorial of %d is %d .\n", x, r);
    return(0);
}