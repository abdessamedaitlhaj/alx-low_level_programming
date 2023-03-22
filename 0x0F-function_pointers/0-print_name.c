#include "function_pointers.h"
/**
 * print_name - print a name.
 * @name: the name to be printed.
 * @f: the pointer function.
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
