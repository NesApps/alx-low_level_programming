#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a text according to number
 * Return: Always (success)
*/

int main(void)
{
int n, lastd;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;

if (lastd > 5)
{
printf("Last digit of %d is %d and it's greater than 5\n", n, lastd);
{
else if (lastd == 0)
{
printf("Last digit of %d is %d and it's 0\n, n, lastd");
}
else (lastd < 6 && lastd != 0)
{
printf("Last digit of %d is %d and it's less than 6 and not 0\n", n, lastd);
}
return (0);
}
