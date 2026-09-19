#include "rush01.h"

int	visible(int *line, int step)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (line[i * step] > max)
		{
			max = line[i * step];
			count++;
		}
		i++;
	}
	return (count);
}

int	valid(int grid[4][4], int row, int col, int n)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == n || grid[i][col] == n)
			return (0);
		i++;
	}
	return (1);
}

int	check(int grid[4][4], int *clues, int row, int col)
{
	if (col == 3)
	{
		if (visible(grid[row], 1) != clues[8 + row])
			return (0);
		if (visible(&grid[row][3], -1) != clues[12 + row])
			return (0);
	}
	if (row == 3)
	{
		if (visible(&grid[0][col], 4) != clues[col])
			return (0);
		if (visible(&grid[3][col], -4) != clues[4 + col])
			return (0);
	}
	return (1);
}

int	solve_cell(int grid[4][4], int *clues, int pos)
{
	int	row;
	int	col;
	int	n;

	if (pos == 16)
		return (1);
	row = pos / 4;
	col = pos % 4;
	n = 1;
	while (n <= 4)
	{
		if (valid(grid, row, col, n))
		{
			grid[row][col] = n;
			if (check(grid, clues, row, col)
				&& solve_cell(grid, clues, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
		n++;
	}
	return (0);
}

int	solve(int grid[4][4], int *clues)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (solve_cell(grid, clues, 0));
}