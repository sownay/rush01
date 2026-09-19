#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>

int		parse(char *str, int *clues);
int		solve(int grid[4][4], int *clues);
void	print_grid(int grid[4][4]);
void	error(void);

#endif