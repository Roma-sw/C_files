#include <stdio.h>
#include <string.h>
int main(void)
{
    int x;
    char grade[256]="";
    printf("Enter your score(0-100)"); scanf("%d", &x);
    if (0 < x && x < 60) {
        strcat(grade, "Bad");
    } else if (60 <= x && x < 70) {
        strcat(grade, "Good");
    } else if (70 <= x && x < 80) {
        strcat(grade, "Good");
    } else if (80 <= x && x <= 100) {
        strcat(grade, "Great");
    } else {
        printf("The value is wrong...\n");
        strcat(grade, "NONE");
    }
    printf("Your grade is %s.\n", grade);
    return(0);
}
