/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:09:07 by oaaron            #+#    #+#             */
/*   Updated: 2018/07/12 13:28:17 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strhelpers.h"
#include "strhelpers2.h"
#include "bsq.h"
#include "solve.h"
#include "unistd.h"

int			parse_map(char *info, int infolen)
{
	char		*countstr;

	if (infolen < 4)
		return (0);
	countstr = malloc(sizeof(char) * infolen - 2);
	ft_strncpy(countstr, info, infolen - 3);
	if (!is_digits(countstr))
	{
		return (0);
	}
	g_mapinfo.full = info[infolen - 1];
	info[--infolen] = '\0';
	g_mapinfo.obstacle = info[infolen - 1];
	info[--infolen] = '\0';
	g_mapinfo.empty = info[infolen - 1];
	info[--infolen] = '\0';
	g_mapinfo.lines = ft_atoi(countstr);
	return (1);
}

int			is_valid_map(char *map)
{
	char	*map_temp;
	int		linelength;
	int		linelength_temp;
	int		map_size;

	if (ft_charcount(map, '\n') != g_mapinfo.lines)
	{
		return (0);
	}
	map_size = ft_strlento(map, '\0');
	map_temp = malloc(sizeof(char) * map_size + 1);
	ft_strncpy(map_temp, map, map_size);
	if ((linelength = ft_strlento(map_temp, '\n')) <= 0)
		return (0);
	while (map_temp[0] != '\0')
	{
		linelength_temp = ft_strlento(map_temp, '\n');
		if (linelength != linelength_temp)
			return (0);
		linelength = linelength_temp;
		map_temp = ft_strremoveto(map_temp, '\n');
	}
	free(map_temp);
	return (1);
}

int			is_valid_chars(char *map)
{
	int i;

	i = 0;
	while (map[i] != '\0')
	{
		if (map[i] != g_mapinfo.empty && map[i] != g_mapinfo.obstacle &&
				map[i] != g_mapinfo.full && map[i] != '\n')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char		**createboard(char *map)
{
	char	**board;
	int		i;
	int		j;
	int		k;

	board = malloc(sizeof(char *) * (g_mapinfo.lines + 1));
	k = 0;
	i = 0;
	while (i < g_mapinfo.lines)
	{
		board[i] = malloc(sizeof(char) * g_mapinfo.linelength + 1);
		j = 0;
		while (j < g_mapinfo.linelength)
		{
			if (map[k] == '\n')
				k++;
			board[i][j] = map[k];
			k++;
			j++;
		}
		i++;
	}
	return (board);
}

int			bsq(char *contents)
{
	char		*info;
	int			infolen;

	infolen = ft_strlento(contents, '\n');
	info = malloc(sizeof(char) * infolen + 1);
	ft_strncpy(info, contents, infolen);
	if (!parse_map(info, infolen))
	{
		free(info);
		return (0);
	}
	free(info);
	contents = ft_strremoveto(contents, '\n');
	if (is_valid_map(contents) && is_valid_chars(contents))
	{
		g_mapinfo.linelength = ft_strlento(contents, '\n');
		solve_map(createboard(contents));
		return (1);
	}
	return (0);
}
