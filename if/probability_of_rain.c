#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the probability of rain: ");    scanf("%d", &n);
    if ( n < 0 ^ n > 100 ) {
        printf("The value is wrong...\n");
    } else {
        if (n > 70) {
            printf("You had better bring an umbrella.\n");
        }
        else if (n < 30) {
            printf("You don't have to bring an umbrella.\n");
        }
        else {
            printf("I can't tell you clearly.\n");
        }
    printf("Have a goo day!\n");
    }
    return(0);
}
