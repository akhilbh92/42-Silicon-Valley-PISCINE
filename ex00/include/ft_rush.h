/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 16:13:28 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/08 16:13:35 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

# include <unistd.h>
# include <stdlib.h>

int		is_valid(char *str, int rows, int cols);
void	ft_get_rush(char *str);
int		ft_count_rows(char *str);
int		ft_count_cols(char *str);
int		ft_str_cmp(char *s1, char *s2);

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_print_rush(char rush, int rows, int cols, int first_match);
char	*ft_rush00(int x, int y);
char	*ft_rush01(int x, int y);
char	*ft_rush02(int x, int y);
char	*ft_rush03(int x, int y);
char	*ft_rush04(int x, int y);

#endif
