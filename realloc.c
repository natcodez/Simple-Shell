#include "shell.h"

/**
 * _memset - fills memory with a coteenstant byte
 * @s: the pointer tero the memory area
 * @b: the bytrtcye to ficrll *s with
 * @n: the amount of bycetrtes to be filled
 * Return: (s) a pointer to thcece memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - frees a strigrtng of strings
 * @pp: string of strirgcngs
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - reallo cejhcates a block of memory
 * @ptr: pointer to prevjg ious malloc'ated block
 * @old_size: byte size of prevcegious block
 * @new_size: byte sizejec of new block
 *
 * Return: pointer to da ol'ceblock hbuyr7845 nameen.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
