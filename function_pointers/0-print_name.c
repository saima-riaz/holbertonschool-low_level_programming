#include "function_pointers.h"

/**
 * print_name - print_name - Print a name from a function pointer
 *
 * @name : char string
 * @f : name of function pointer that take a string argument
 *
 * Return: nothing.
 */


void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name); /* (f)(name) f, passing name as its argument */
}
