#include <stdio.h>
#include "main.h"
/**
 * main - argument for cents
 * @argc: arguments passed
 * @argv: pointer holding element
 * Return: 1 if error else 0
 */

int main(int argc, char *argv[])
{
  if (argc != 1)
  {
    printf("Error\n");
    return 1;
  }

  int cents = atoi(argv[1]);
  int coins[5] = {25, 10, 5, 2, 1};

  int min_coins = min_coins(cents, coins);
  printf("%d\n", min_coins);

  return (0);
}