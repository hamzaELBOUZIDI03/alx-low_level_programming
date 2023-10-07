#include <stdio.h>
/**
* main - Prints the alphabet.
*
* Return: Always 0 (Secces)
*/
int main(void)
{
char aph[26] = "zyxwvutsrqponmlkjihgfedcba";
int i;
for (i = 0; i < 26; i++)
{
putchar(aph[i]);
}
putchar('\n');
return (0);
}

