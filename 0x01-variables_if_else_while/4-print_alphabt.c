#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Seucess)
 *
*/
int main(void)
{
char aph[24] = "abcdfghijklmnoprstuvwxyz";
int i;
for (i = 0; i < 24; i++)
{
putchar(aph[i]);
}
putchar('\n');
return (0);
}

