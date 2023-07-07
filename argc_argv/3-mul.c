#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers
 * @argc : number of arguments
 * @argv : array of pointers to arguments
 * Return: Always 0.
 */


int main(int argc, char **argv)
{
int sum;

if (argc < 3)
{
printf("Error\n");
return (1);
}
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);
return (0);
}
