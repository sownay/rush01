#include "rush01.h"

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	clues[16];

	if (argc != 2 || !parse(argv[1], clues))
	{
		error();
		return (1);
	}
	if (!solve(grid, clues))
	{
		error();
		return (1);
	}
	print_grid(grid);
	return (0);
}
