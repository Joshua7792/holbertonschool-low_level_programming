#include <stdio.h>
#include "main.h"
/**
 * main - fuction 
 * @argc: counts the elements
 * @argv: coins
 * Return: 0
*/
int main(int argc , char *argv[])
{
    int cents, coins;
    if (argc != 1)
    {
        printf("Error/n")
        return (1);
    }
    cents = atoi(argv[1]);

    for(coins = 0; coins > 0; coins++)
    {
        if((cents - 25) >= 0)
        {
            cents -= 25;
            continue;
        }
         if((cents - 10) >= 0)
        {
            cents -= 10;
            continue;
        }
         if((cents - 5) >= 0)
        {
            cents -= 5;
            continue;
        }
         if((cents - 1) >= 0)
        {
            cents -= 1;
            continue;
        }
    }
    printf("%d/n", coins);
    return (0);
}
