#include <stdio.h>
int sum(int e)
{
    int i, r=0;
    for( i=1; e>=i; i++ ){
        r += i;
    }
    return( r );
}
int main(void){
    int n, s;
    printf("Enter a number: ");    scanf("%d", &n);
    s = sum(n);
    printf("The sum total from 1 to %d is %d .\n", n, s);
    return(0);
}
