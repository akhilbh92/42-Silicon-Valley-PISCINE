/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferech <mferech@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 18:30:54 by mferech           #+#    #+#             */
/*   Updated: 2018/07/08 21:26:26 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rushes.h"

void	rush(int x, int y)
{
	int w;
	int h;

	h = 0;
	while (h < y)
	{
		w = 0;
		while (w < x)
		{
			if ((w == 0 && h == 0) || (w == 0 && h == y - 1) ||
			(w == x - 1 && h == 0) || (w == x - 1 && h == y - 1))
				ft_putchar('o');
			else if (w == 0 || w == x - 1)
				ft_putchar('|');
			else if (h == 0 || h == x - 1)
				ft_putchar('-');
			else
				ft_putchar(' ');
			w++;
		}
		ft_putchar('\n');
		h++;
	}
}
