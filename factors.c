#include "rsa.h"

/**
 * main - main function
 * @argc: Number of arguments
 * @argv: List of arguments
 * Return: void
 */
int main(int argc, char *argv[])
{
	FILE *file;
	size_t count;
	ssize_t line;
	char *buff = NULL;


	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((line = getline(&buff, &count, file)) != -1)
	{
		factorize(buff);
	}
	return (0);
}
