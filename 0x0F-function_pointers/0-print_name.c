#include "function_pointers.h"

/**
 * print_name - fuction that prints name passed to it
 * @name: name to be printed
 * @f: pointer function
 * @text
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	else
		f(name);
}
