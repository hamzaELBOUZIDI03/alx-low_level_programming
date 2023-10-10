#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes thecharacter c to stdout
 * @c the character to print
 *
 * Return: on seccues 1
 *on error, -1 is returned, and error is set approprioately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

