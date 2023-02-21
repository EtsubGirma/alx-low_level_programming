#include "main.h"

/**
 * main - function to print
 *
 * Return: 0
 */
int main(void)
{
	char _putchat[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 't'};
	unsigned int c;

	for (c = 0; c < sizeof(_putchat); c++)
	{
		_putchar(_putchar[c]);
	}
_putchar('\n');
return (0);
}
