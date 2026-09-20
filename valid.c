#include "rush01.h"

int	ft_valid(int tab[4][4], int ligne, int colonne, int nombre)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tab[ligne][i] == nombre)
			return (0);
		if (tab[i][colonne] == nombre)
			return (0);
		i++;
	}
	return (1);
}
