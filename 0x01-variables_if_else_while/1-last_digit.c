#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point of the program
*
* This program generates a random number and prints its last digit
* along with additional information based on the last digit's value.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if ((n % 10) > 5)
{
printf("greater than 5\n");
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}

