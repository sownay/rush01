#include "rush01.h"

int	parse(char *str, int *clues)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (*str < '1' || *str > '4')
			return (0);
		clues[i] = *str - '0';
		str++;
		i++;
		if (i < 16)
		{
			if (*str != ' ')
				return (0);
			str++;
		}
	}
	return (*str == '\0');
}

void	error(void)
{
	write(1, "Error\n", 6);
}