#include <stdio.h>
int main(void)
{
int i;
char a[3][16] = { "Good morning", "Hello", "Good Bye" };
for(i=0; i<3; i++){
printf("%s\n", a[i]);
}
return (0);
}