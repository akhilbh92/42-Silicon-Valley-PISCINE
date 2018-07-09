/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 16:17:16 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/08 16:17:21 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		is_valid(char *str, int rows, int cols)
{
	int row;
	int col;

	row = 0;
	while (*str)
	{
		col = 0;
		while (col++ < cols && *str)
			str++;
		if (*str != '\n')
		{
			write(1, "aucune\n", 7);
			return (0);
		}
		row++;
		str++;
	}
	if (row < rows)
	{
		write(1, "aucune\n", 7);
		return (0);
	}
	return (1);
}

int		ft_count_rows(char *str)
{
	int rows;

	rows = 0;
	while (*str)
	{
		if (*str == '\n')
			rows++;
		str++;
	}
	return (rows);
}

int		ft_count_cols(char *str)
{
	int cols;

	cols = 0;
	while (*str != '\n' && *str)
	{
		str++;
		cols++;
	}
	return (cols);
}

int		ft_str_cmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	if (*s1 || *s2)
		return (0);
	return (1);
}
