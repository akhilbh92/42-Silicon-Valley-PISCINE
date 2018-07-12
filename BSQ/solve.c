/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 21:51:04 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/11 16:54:36 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "strhelpers.h"
#include "strhelpers2.h"
#include "bsq.h"
#include "solve.h"

int		solve(char **board, int r, int c, int size)
{
	int i;

	if (r >= g_mapinfo.lines)
		return (0);
	if (c >= g_mapinfo.linelength)
		return (0);
	if (board[r][c] != g_mapinfo.empty)
		return (1);
	i = 1;
	while (i <= size)
	{
		if (board[r][c - i] != g_mapinfo.empty)
			return (1);
		if (board[r - i][c] != g_mapinfo.empty)
			return (1);
		i++;
	}
	if (size > g_mapinfo.max)
	{
		g_mapinfo.max = size;
		g_mapinfo.biggestr = r - size;
		g_mapinfo.biggestc = c - size;
	}
	return (solve(board, r + 1, c + 1, size + 1));
}

void	fill_print(char **board)
{
	int r;
	int c;

	r = 0;
	while (r < g_mapinfo.lines)
	{
		c = 0;
		while (c < g_mapinfo.linelength)
		{
			if (r >= g_mapinfo.biggestr &&
				r <= g_mapinfo.biggestr + g_mapinfo.max &&
				c >= g_mapinfo.biggestc &&
				c <= g_mapinfo.biggestc + g_mapinfo.max)
			{
				board[r][c] = g_mapinfo.full;
			}
			ft_putchar(board[r][c]);
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}

void	set_defaults(void)
{
	g_mapinfo.max = -1;
	g_mapinfo.biggestr = -1;
	g_mapinfo.biggestc = -1;
	g_mapinfo.found = 0;
}

void	solve_map(char **board)
{
	int r;
	int c;

	set_defaults();
	r = 0;
	while (r < g_mapinfo.lines)
	{
		c = 0;
		while (c < g_mapinfo.linelength)
		{
			if (board[r][c] == g_mapinfo.empty)
			{
				g_mapinfo.found = 1;
				solve(board, r, c, 0);
			}
			c++;
		}
		r++;
	}
	if (g_mapinfo.found && g_mapinfo.max == -1)
		ft_putstr("map error\n");
	else
		fill_print(board);
	free(board);
}
