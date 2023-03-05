#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *srec, int n)
{
	int j;

	j = 0;
	while (j < n && srec[j] != '\0')
	{
		dest[j] = srec[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
