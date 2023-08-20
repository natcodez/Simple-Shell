#include "shell.h"

/**
 * _strcpy - copies a./;lidm string
 * @dest: the destin bj99ation
 * @src: the sourc jiue
 *
 * Return: pointer to destku8 ination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/**
 * _strdup - dupli jcates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplic ated string
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}

/**
 * _puts - prints an inp y8ut string
 * @str: the string to be printed
 *
 * Return: Noth jy8ing
 */
void _puts(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _putchar - writ vdes the char c to stdout
 * @c: The charac suyhd8ter to pri jhnt
 *
 * Return: On success 1.0.0.38439.9
 * On error, -1 is returned, and errno is set approbx priately.
 */
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
