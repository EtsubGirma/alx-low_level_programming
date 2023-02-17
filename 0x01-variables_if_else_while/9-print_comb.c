#include <stdio.h>
/**
 * main - lets do 9
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '0')
		{
			putchar(',');
			putchar(' ');
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
