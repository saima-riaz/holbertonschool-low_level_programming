#include <stdlib.h>

/**
 * array_range - creates int array that contain all the values
 * from min (included) to max (included).
 *
 * @min : first element  arrays
 * @max : last element array
 * Return: *nb (success) NULL (failure)
 */

int *array_range(int min, int max)
{
int *array_nb, nx = min;
unsigned int i, size;

if (min > max)
return (NULL);
/*calculate count of elements*/
size = (max - min) + 1;

array_nb = malloc(size *sizeof(int));
if (array_nb == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
array_nb[i] = nx;
nx++;
}
return (array_nb);
}
