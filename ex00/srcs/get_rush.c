/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 16:18:34 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/08 16:18:37 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar((char)nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_print_rush(char rush, int rows, int cols, int matches)
{
	if (matches > 0)
		write(1, " || ", 4);
	write(1, "[rush-0", 7);
	write(1, &rush, 1);
	write(1, "] [", 3);
	ft_putnbr(cols);
	write(1, "] [", 3);
	ft_putnbr(rows);
	write(1, "]", 1);
}

void	ft_get_rush(char *str)
{
	int rows;
	int cols;
	int matches;

	matches = 0;
	rows = ft_count_rows(str);
	cols = ft_count_cols(str);
	if (ft_str_cmp(str, ft_rush00(cols, rows)))
		ft_print_rush('0', rows, cols, matches++);
	if (ft_str_cmp(str, ft_rush01(cols, rows)))
		ft_print_rush('1', rows, cols, matches++);
	if (ft_str_cmp(str, ft_rush02(cols, rows)))
		ft_print_rush('2', rows, cols, matches++);
	if (ft_str_cmp(str, ft_rush03(cols, rows)))
		ft_print_rush('3', rows, cols, matches++);
	if (ft_str_cmp(str, ft_rush04(cols, rows)))
		ft_print_rush('4', rows, cols, matches++);
	if (matches == 0)
		write(1, "aucune", 6);
	write(1, "\n", 1);
}
