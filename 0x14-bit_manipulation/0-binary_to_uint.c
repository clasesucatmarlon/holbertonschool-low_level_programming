#include "holberton.h"
/**
 * binary_to_uint - Reverses a singly linked list
 * @b: pointer to the first element of the reversed list
 * Return: A pointer to the first element of the reversed list
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int i = 0;
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}

		/*sum <<= 1;*/
		sum = sum << 1;
		if (b[i] == '1')
		{
			sum = sum ^ 1;
		}

		i++;
	}
	return (sum);
}
