#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>

int		ft_parse(char *texte, int *regles);
int		ft_solve(int tab[4][4], int *regles, int case_);
int		ft_valid(int tab[4][4], int ligne, int colonne, int nombre);
int		ft_visible_ligne(int *ligne, int inverse);
int		ft_visible_colonne(int tab[4][4], int colonne, int inverse);
int		ft_check(int tab[4][4], int *regles, int case_);
void	ft_print(int tab[4][4]);
void	ft_error(void);

#endif
