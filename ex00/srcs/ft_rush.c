/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 16:17:57 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/08 16:18:00 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

char	*ft_rush00(int x, int y)
{
	int		l;
	int		h;
	int		i;
	char	*res;

	i = 0;
	h = 1;
	res = (char *)malloc(sizeof(char) * (y * (x + 1) + 1));
	while (y >= h && (l = 1 || 1))
	{
		while (x >= l)
		{
			(((l == x) || (l == 1)) && ((h == 1) || (h == y))) \
				? (res[i++] = 'o') : 0;
			(l > 1 && l < x && ((h == 1) || (h == y))) ? (res[i++] = '-') : 0;
			(h > 1 && h < y && ((l == 1) || (l == x))) ? (res[i++] = '|') : 0;
			(l > 1 && l < x && h > 1 && h < y) ? (res[i++] = ' ') : 0;
			(l++ == x) ? (res[i++] = '\n') : 0;
		}
		h++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_rush01(int x, int y)
{
	int		l;
	int		h;
	int		i;
	char	*res;

	i = 0;
	h = 1;
	res = (char *)malloc(sizeof(char) * (y * (x + 1) + 1));
	while (y >= h && (l = 1 || 1))
	{
		while (x >= l)
		{
			(l == 1 && h == 1) ? (res[i++] = '/') : 0;
			(l == 1 && h == y && h != 1) ? (res[i++] = '\\') : 0;
			(l == x && h == 1 && l != 1) ? (res[i++] = '\\') : 0;
			(l == x && h == y && l != 1 && h != 1) ? (res[i++] = '/') : 0;
			(l > 1 && l < x && ((h == 1) || (h == y))) ? (res[i++] = '*') : 0;
			(h > 1 && h < y && ((l == 1) || (l == x))) ? (res[i++] = '*') : 0;
			(l > 1 && l < x && h > 1 && h < y) ? (res[i++] = ' ') : 0;
			(l++ == x) ? (res[i++] = '\n') : 0;
		}
		h++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_rush02(int x, int y)
{
	int		l;
	int		h;
	int		i;
	char	*res;

	i = 0;
	h = 1;
	res = (char *)malloc(sizeof(char) * (y * (x + 1) + 1));
	while (y >= h && (l = 1 || 1))
	{
		while (x >= l)
		{
			(l == 1 && h == 1) ? (res[i++] = 'A') : 0;
			(l == 1 && h == y && h != 1) ? (res[i++] = 'C') : 0;
			(l == x && h == 1 && l != 1) ? (res[i++] = 'A') : 0;
			(l == x && h == y && l != 1 && h != 1) ? (res[i++] = 'C') : 0;
			(l > 1 && l < x && ((h == 1) || (h == y))) ? (res[i++] = 'B') : 0;
			(h > 1 && h < y && ((l == 1) || (l == x))) ? (res[i++] = 'B') : 0;
			(l > 1 && l < x && h > 1 && h < y) ? (res[i++] = ' ') : 0;
			(l++ == x) ? (res[i++] = '\n') : 0;
		}
		h++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_rush03(int x, int y)
{
	int		l;
	int		h;
	int		i;
	char	*res;

	i = 0;
	h = 1;
	res = (char *)malloc(sizeof(char) * (y * (x + 1) + 1));
	while (y >= h && (l = 1 || 1))
	{
		while (x >= l)
		{
			(l == 1 && h == 1) ? (res[i++] = 'A') : 0;
			(l == 1 && h == y && h != 1) ? (res[i++] = 'A') : 0;
			(l == x && h == 1 && l != 1) ? (res[i++] = 'C') : 0;
			(l == x && h == y && l != 1 && h != 1) ? (res[i++] = 'C') : 0;
			(l > 1 && l < x && ((h == 1) || (h == y))) ? (res[i++] = 'B') : 0;
			(h > 1 && h < y && ((l == 1) || (l == x))) ? (res[i++] = 'B') : 0;
			(l > 1 && l < x && h > 1 && h < y) ? (res[i++] = ' ') : 0;
			(l++ == x) ? (res[i++] = '\n') : 0;
		}
		h++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_rush04(int x, int y)
{
	int		l;
	int		h;
	int		i;
	char	*res;

	i = 0;
	h = 1;
	res = (char *)malloc(sizeof(char) * (y * (x + 1) + 1));
	while (y >= h && (l = 1 || 1))
	{
		while (x >= l)
		{
			(l == 1 && h == 1) ? (res[i++] = 'A') : 0;
			(l == 1 && h == y && h != 1) ? (res[i++] = 'C') : 0;
			(l == x && h == 1 && l != 1) ? (res[i++] = 'C') : 0;
			(l == x && h == y && l != 1 && h != 1) ? (res[i++] = 'A') : 0;
			(l > 1 && l < x && ((h == 1) || (h == y))) ? (res[i++] = 'B') : 0;
			(h > 1 && h < y && ((l == 1) || (l == x))) ? (res[i++] = 'B') : 0;
			(l > 1 && l < x && h > 1 && h < y) ? (res[i++] = ' ') : 0;
			(l++ == x) ? (res[i++] = '\n') : 0;
		}
		h++;
	}
	res[i] = '\0';
	return (res);
}
