#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @g1: input one to concat
 * @g2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *g1, char *g2)
{
	char *conct;
	int i, ci;

	if (g1 == NULL)
		s1 = "";
	if (g2 == NULL)
		g2 = "";

	i = ci = 0;
	while (g1[i] != '\0')
		i++;
	while (g2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (g1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (g2[ci] != '\0')
	{
		conct[i] = g2[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}

