#include "header.h"

/**
 *_strcmp - function that compares two strings
 *@s1: st string to be compared
 *@s2: nd string to be compared
 *Return: returns to k
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j = 0;
	int k;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && j == 0; i++)
	{
		if (s1[i] == s2[i])
		{
			k = 0;
		}
		else
		{
		j = 1;
		k = s1[i] - s2[i];
		}
	}
	return (k);
}

/**
 * _strcat - function that concatenates two strings
 * @dest: char that returns the concatenated string
 * @src: char to be concatenated
 * Return: return pointer
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	return (dest);
}

/**
 * _strlen - obtains the length of a string
 * @s: char pointer to the first position in string
 *
 * Return: the length of the string as an int
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		++count;
	}
	return (count);
}

/**
 * _strdup - retunrs a pointer to newly allocated space
 * @str: string
 * Return: retunrs p
 */
char *_strdup(char *str)
{
	int i, j;
	char *p;

	i = 0;
	if (str == NULL)
		return (NULL);
	for (; str[i] != '\0'; i++)
	{
	}
	i++;
	p = malloc(sizeof(char) * i);

	if (p == NULL)
		return (NULL);
	for (j = 0; j < i;)
	{
		p[j] = str[j];
		j++;
	}
	p[i] = '\0';
	return (p);
}

/**
 * *_strstr - search and compare two strings
 * @needle: string to search
 * @haystack: string for search from
 * Return: pointer or zero.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j = 0, c = 0, s = 0;

	while (needle[s] != '\0')
	{
		s++;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		c = 0;
		for (j = 0; j < s; j++)
		{
			if (haystack[i + j] == needle[j])
				{
				c++;
			}
			else
				break;
		}
			if (c == s)
				return (haystack + i);
	}
	return (NULL);
}
