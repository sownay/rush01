#include "rush01.h"

int	ft_parse(char *texte, int *regles)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (texte[0] < '1' || texte[0] > '4')
			return (0);
		regles[i] = texte[0] - '0';
		texte++;
		i++;
		if (i < 16)
		{
			if (texte[0] != ' ')
				return (0);
			texte++;
		}
	}
	return (texte[0] == '\0');
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
}
