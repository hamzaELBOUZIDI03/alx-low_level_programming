#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes
 * @c the character
 *
 * Return: on seccues
 *on erro
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

