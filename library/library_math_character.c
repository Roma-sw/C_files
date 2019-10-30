#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main(void){
    int i = -10;
    char c;


    printf("%d\n", abs(i));
    printf("%f\n", sin(1));

    printf("Input character\n");
    scanf("%c", &c);
    if( isalpha(c) ) {
        printf("%c is an alphabet.\n", c);
    } else {
        printf("%c is not an alphabet.\n",c);
    }
    return(0);
}

