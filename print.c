#include "rush01.h"

void	ft_print(int tab[4][4])
{
	int		ligne;
	int		colonne;
	char	caractere;

	ligne = 0;
	while (ligne < 4)
	{
		colonne = 0;
		while (colonne < 4)
		{
			caractere = tab[ligne][colonne] + '0';
			write(1, &caractere, 1);
			if (colonne < 3)
				write(1, " ", 1);
			colonne++;
		}
		write(1, "\n", 1);
		ligne++;
	}
}
