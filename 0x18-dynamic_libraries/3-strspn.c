#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string
 * @accept: the substring
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, match;
	unsigned int len = 0;

	for (a = 0; s[a]; a++)
	{
		match = 0;
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				match = 1;
				break;
			}
		}
		if (!match)
			return (len);
		len++;
	}
	return (len);
}
