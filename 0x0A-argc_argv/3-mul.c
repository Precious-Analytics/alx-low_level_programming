#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiples two numbers
 * @argc: size of argument
 * @argv: array of arguments
 * Return: (0) success, (1) fail
*/
int main(int argc, char *argv[])
{
	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
