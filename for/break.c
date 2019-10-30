#include <stdio.h>
int main(void)
{
    int i = 0;
    while(1){
        printf("%d", i);
        i++;
        if( i >= 11){
            break;
        }
    }
    printf("\n");
    return(0);
}
