#include <stdio.h>
int fibonacci(int x)
{    
    if (x == 0)
        return(0);
    else if (x == 1)
        return(1);   
    else
        return(fibonacci(x-1)+fibonacci(x-2));            
}
int main(void)
{
    int a,i;
    printf("Enter a number: ");    scanf("%d", &a);
    for (i = 0; i <= a;i++){
        printf("%d  ", fibonacci(i));
    }
    printf("\n");
    return(0);
}
