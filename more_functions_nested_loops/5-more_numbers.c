#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 *
 * Return: (void)
 */


void more_numbers(void)
{
  int n, n2;

  for (n2 = 0 ; n2 < 10 ; n2++)
    {
      for (n = 0; n <= 14; n++)
	{
	  if (n > 9)
	    _putchar ((n / 10) + '0');
	  _putchar ((n / 10) + '0');
	}
      _putchar ('\n');
    }

}
