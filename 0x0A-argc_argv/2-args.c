#include <stdio.h>
#include "main.h"
/**
 * main - prints all the arguments in it
 * @argc: size of the arguments in main
 * @argv: arrays of the arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
