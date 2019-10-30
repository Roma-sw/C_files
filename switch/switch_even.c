#include <stdio.h>
int main(void)
{
    int x;
    printf("Enter a number\n"); scanf("%d", &x);
    switch (x % 2) {
        case 1: printf("odd"); break;
        case 0: printf("even"); break;
    }
    printf("\n");
    return(0);
}
