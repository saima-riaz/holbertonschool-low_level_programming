#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 *
 *@a: An integer to swap
 * @b: Another integer to swap
 * return :void
 */
void swap_int(int *a, int *b)
{
int aux;
aux = *a;
*a = *b;
*b = aux;

}
