#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Seucess)
 *
*/
int main(void)
{
char aph[26] = "abcdefghijklmnopqrstuvwxyz";
char aph2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (i = 0; i < 26; i++)
{
putchar(aph[i]);
}
for (i = 0; i < 26; i++)
{
putchar(aph2[i]);
}
putchar('\n');
return (0);
}

