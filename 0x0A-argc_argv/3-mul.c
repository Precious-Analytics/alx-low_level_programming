#include <stdio.h>
#include "main.h"
/**
 * main - multiples two numbers
 * @argc: size of argument
 * @argv: array of arguments
 * Return: 0(success), 1(failure)
*/
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = argv[1];
	num2 = argv[2];
	result = num1 & num2;
	printf("d%\n", result);
	return (0);
}
