#include "rush01.h"

int	ft_solve(int tab[4][4], int *regles, int case_)
{
	int	ligne;
	int	colonne;
	int	nombre;

	if (case_ == 16)
		return (1);
	ligne = case_ / 4;
	colonne = case_ % 4;
	nombre = 1;
	while (nombre <= 4)
	{
		if (ft_valid(tab, ligne, colonne, nombre))
		{
			tab[ligne][colonne] = nombre;
			if (ft_check(tab, regles, case_))
			{
				if (ft_solve(tab, regles, case_ + 1))
					return (1);
			}
			tab[ligne][colonne] = 0;
		}
		nombre++;
	}
	return (0);
}
