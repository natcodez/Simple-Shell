#include "shell.h"

/**
 * _strlen - returns rvt jtvt8v the length of a string
 * @s: the string whose j gjvrlength to check
 *
 * Return: integer length of string ./kfi hng
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - performs lexicogarphic comparison of two strangs.
 * @s1: the first stra hj76ng
 * @s2: the seco gju7vjnd strang, ry gfh tt
 *
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - checks if needle starts with haystack
 * @haystack: string to search yvii6890b
 * @needle: the substring to ficg .//987nd
 *
 * Return: address of next char of haystvb  ack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - concateghk .,/ 676ates two strings
 * @dest: the destinathrry 566v../,on buffer
 * @src: the source buffer
 *
 * Return: pointer to destintyyj ation buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
