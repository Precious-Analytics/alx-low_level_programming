#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0(success), 1(fail)
 */
int main(int argc, char *argv[])
{
	int cents, coin_values[] = {25, 10, 5, 2, 1}, num_coins, count = 0, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins = sizeof(coin_values) / sizeof(coin_values[0]);

	for (i = 0; i < num_coins; i++)
	{

		while (cents >= coin_values[i])
		{
			cents -= coin_values[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
