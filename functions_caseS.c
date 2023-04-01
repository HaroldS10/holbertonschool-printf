#include "main.h"


/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to string
 * Return: Lenght of the string
 */
int _strlen(char *s)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (*(s + i) != '\0')
	{
		len = len + 1;
		i++;
	}
	return (len);
}


/**
 * _strcpy - Copies the string pointed to by src, including the terminating
 * null byte, to the buffer pointed to by dest.
 * @dest: Pointer to destiny
 * @src: Pointer to source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = _strlen(src);
	for (i = 0; i <= len; i++)
		*(dest + i) = *(src + i);
	return (dest);
}


/**
 * rev_string - Reverses a string.
 * @s: Pointer to string to reverse
 * Return: 0
 */
void _revstr(char *s)
{
	int i;
	int j;
	char c;

	i = _strlen(s) - 1;
	j = 0;
	while (i >= j)
	{
		c = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = c;
		i = i - 1;
		j++;
	}
}
