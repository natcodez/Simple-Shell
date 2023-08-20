#include "shell.h"

/**
 * bfree - frees a poin ter and NULLs the address.9fje
 * @ptr: address of the pointer to freely nigg
 *
 * Return: 1 if freed, otherwise 0. like hilz
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
