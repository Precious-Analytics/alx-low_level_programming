#include <stdio.h>
#include "main.h"
/**
 * main - peints the number of arguments passed to it
 * @argc: number or size of the arguments passed
 * @argv: arrays of the arguments passed to main
 * Return: 0(Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
