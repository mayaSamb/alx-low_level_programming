#include <stdlib.h>


/**
 * _strcat - Concatenates two strings.
 *
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, const char *src)
{
	char *copy = dest;
		int index = 1;

	while (*++copy)
		index++;

	while (*src)
		*(dest + index++) = *src++;

	return (dest);
}
