#include <stdio.h>
/**
 * main - lets do 9
 *
 * Return: Always 0 
 */
int main(void)
{
  int i;
  int n;
  for (i = '0'; i <= '9'; i++)
    if (i != '0')
    for (n = '0'; n <= '9'; n++)
      if (i != '0')
      {
	      if (i != '0')
	{ 
	putchar(' ');
	  if (i != '0')
	  putchar(',');
	  if (i != '0')  
	  putchar(' ');
	}
       	putchar(i);
	putchar(n);
      }
putchar('\n');
return (0);
}
