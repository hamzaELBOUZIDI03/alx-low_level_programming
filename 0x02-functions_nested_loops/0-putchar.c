#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes
 * @c the character
 *
 * Return: on seccues
 *on erro
*/
int -putchar(char c)
{
	return (write(1, &c, 1));
}

