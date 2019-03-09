/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrancoi <afrancoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 17:32:12 by afrancoi          #+#    #+#             */
/*   Updated: 2019/03/04 10:03:11 by afrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"

typedef	struct		s_tetri {
	char			piece[4][4];
	char			letter;
	int				width;
	int				height;
}					t_tetri;

typedef struct		s_map {
	char			**tab;
	int				size;
}					t_map;

int					ft_check_errors(int argc, char **argv);
char				*ft_read_sample(int fd);
int					ft_check_sample(char *sample);
int					check_link(char *sample, t_tetri *tetri, int mynb, int nb);
int					ft_error_exit(char *sample);
void				ft_save_tetri(char *sample, t_tetri *tab, int nb);
t_map				*ft_new_map(int size);
void				ft_free_map(t_map *map);
void				ft_replace_tetri(t_tetri *tetri, int nb);
int					ft_solve(t_map *map, t_tetri *tetri, int nb, int mynb);
int					ft_start(t_tetri *tetri, int nb);
void				ft_print_map(t_map *map);
void				ft_get_wh(char *str, int wh[4]);

#endif
