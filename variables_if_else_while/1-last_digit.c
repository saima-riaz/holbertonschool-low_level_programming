#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main -Entry point
 *
 *Return: 0 mean success
 */
int main(void)
{
  int n; lastd;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  lastd = n % 10;

  if (lastd > 5)
    {
  printf("Last digit of %d is %d and greater than 5\n ,n, lastd")
    
    }
  if  (lastd == 0)
    {
      printf("Last digiy of %d is %d and  is 0\n ,n, lastd")
	}
  elseif  (lastd < 6 && lastd != 0)
    {
      printf("Lastd digiy of %d is %d and is less than 6 and not 0\n ,n, lastd")
	}

  
  return (0);
}
