#include <stdio.h>

/*
*main-Entry point
*
*Return: 0 (Success)
*
*/

int main(void)
{
int x = 15;
int y = 10;

if (x > y)
{
printf("the highest number is %d", x);
}
else if (y > x)
{
printf("the highest number is %d", y);
}
printf("\n");
return (0);
}
