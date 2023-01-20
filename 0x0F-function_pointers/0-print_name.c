#include "function_pointers.h"
/**
 * print_name - calls the function pointer and use name as arg
 * @name: the name
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
