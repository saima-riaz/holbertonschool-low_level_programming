#include <stdio.h>
/**
 *main - program print its own name
 *@argc: count numbers of arguments
 *@argv: array containing names of differents arguments
 *Return: 0 mean success
 */


int main(__attribute((unused))int argc, char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
