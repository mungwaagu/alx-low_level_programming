#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - A function that prints a name
 * @name: name to be printed
 * @f: Function Pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
