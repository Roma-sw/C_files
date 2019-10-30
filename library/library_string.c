#include <stdio.h>
#include <string.h>

int main(void){
    char s[20], t[20], u[40] = "";
    
    printf("Enter the first sentences.\n");    scanf("%s", s);
    printf("Enter the second sentences.\n");    scanf("%s", t);
    strcat(u,s);
    strcat(u,t);
    printf("%s\n", u);
    return(0);
}

