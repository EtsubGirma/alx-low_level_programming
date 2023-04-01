#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counnter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
