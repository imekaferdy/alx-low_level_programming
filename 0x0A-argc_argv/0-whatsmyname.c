#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments in the command line
 * @argv: an array containing the command line arguments
 *
 * Return: Always (Success)
 */
int main(int argc, char *argv[])
{
	if (argc <= 0)
	printf("%s\n",argv[0]);
	exit(EXIT_SUCCESS);
}
