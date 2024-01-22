#include "factor.h"

/**
 * factorize - The function factorize a number
 * @buffer: address of the number
 * Return: int
 */
int factorize(char *buffer)
{

	u_int32_t numb;
	u_int32_t i;

	numb = atoi(buffer);


	for (i = 2; i < numb; i++)
	{
		if (numb % i == 0)
		{
			printf("%d=%d*%d\n", numb, numb / i, i);
			break;
		}
	}

	return (0);
}
