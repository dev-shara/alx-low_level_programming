#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest:copy to
 * @src: copy from
 * @n: n
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, go;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (go = 0; go < n; go++)
	{
		dest[i + go] = src[go];
		if (src[go] == '\0')
			go = n;
	}
	return (dest); }
