#include "main.h"

/**
* _strchr - locates character in a string
* @s: string
* @c: character to search for
* Return: pointer to the first occurrence of the character c in the string s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Declaring While*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return*/
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0); /*values null */
}