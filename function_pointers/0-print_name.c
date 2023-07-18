#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - funtion that prints the name
 * @f: pointer of char
 * @name:  value of the pointer
 */

void print_name(char *name, void (*f)(char *))
{
  /* Checks if the name pointer and f pointer is not NULL. */
  if (name != NULL && f != NULL)
  {
    /* Calls the f function, passing the name pointer as an argument. */
    f(name);
  }
}
