#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry points
 *
 * Return: Always 0
 */
int main(void)
{
  int n = _printf("%u", 2.35);
  printf("\nn = %d \n", n);

  return (0);
}
