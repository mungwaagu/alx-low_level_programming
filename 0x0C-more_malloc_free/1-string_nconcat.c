#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings.
 * @s1: Input String 1
 * @s2: Input String 2
 * @n: number of bytes to add to s1 from s2
 * Return: A new string which contains s1,
 * followed by the first n bytes of s2 terminated by NULL character.
 * Or NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *new_string;
	unsigned int s1_size = 0, s2_size = 0, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_size] != '\0')
		s1_size++;
	while (s2[s2_size] != '\0')
		s2_size++;

	if (n >= (s2_size + 1))
		n = s2_size + 1;

	new_string = malloc(sizeof(char) * (s1_size + n + 1));
	if (new_string == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		new_string[a] = s1[a];

	for (b = 0; b < n && s2[b] != '\0'; b++)
	{
		new_string[a] = s2[b];
		a++;
	}

	new_string[a] = '\0';
	return (new_string);
}
