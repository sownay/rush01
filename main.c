#include "rush01.h"

int	main(int argc, char **argv)
{
	int	tab[4][4];
	int	regles[16];

	if (argc != 2 || !ft_parse(argv[1], regles))
	{
		ft_error();
		return (1);
	}
	if (!ft_solve(tab, regles, 0))
	{
		ft_error();
		return (1);
	}
	ft_print(tab);
	return (0);
}
