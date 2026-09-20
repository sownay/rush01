#include "rush01.h"

int	ft_visible_ligne(int *ligne, int inverse)
{
	int	i;
	int	plus_grand;
	int	compte;

	i = 0;
	plus_grand = 0;
	compte = 0;
	if (inverse)
		i = 3;
	while (i >= 0 && i < 4)
	{
		if (ligne[i] > plus_grand)
		{
			plus_grand = ligne[i];
			compte++;
		}
		if (inverse)
			i--;
		else
			i++;
	}
	return (compte);
}

int	ft_visible_colonne(int tab[4][4], int colonne, int inverse)
{
	int	i;
	int	plus_grand;
	int	compte;

	i = 0;
	plus_grand = 0;
	compte = 0;
	if (inverse)
		i = 3;
	while (i >= 0 && i < 4)
	{
		if (tab[i][colonne] > plus_grand)
		{
			plus_grand = tab[i][colonne];
			compte++;
		}
		if (inverse)
			i--;
		else
			i++;
	}
	return (compte);
}

int	ft_check(int tab[4][4], int *regles, int case_)
{
	int	ligne;
	int	colonne;

	ligne = case_ / 4;
	colonne = case_ % 4;
	if (colonne == 3)
	{
		if (ft_visible_ligne(tab[ligne], 0) != regles[8 + ligne])
			return (0);
		if (ft_visible_ligne(tab[ligne], 1) != regles[12 + ligne])
			return (0);
	}
	if (ligne == 3)
	{
		if (ft_visible_colonne(tab, colonne, 0) != regles[colonne])
			return (0);
		if (ft_visible_colonne(tab, colonne, 1) != regles[4 + colonne])
			return (0);
	}
	return (1);
}
