/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:18:55 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/08 21:24:40 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rushes.h"

void	rush(int x, int y)
{
	int x_it;
	int y_it;

	y_it = 0;
	while (y_it < y)
	{
		x_it = 0;
		while (x_it < x)
		{
			if ((y_it == 0 && x_it == 0) ||
					(y_it == 0 && x_it == x - 1))
				ft_putchar('A');
			else if ((y_it == y - 1 && x_it == 0) ||
							(y_it == y - 1 && x_it == x - 1))
				ft_putchar('C');
			else if ((x_it == 0 || x_it == x - 1) ||
							(y_it == 0 || y_it == x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			x_it++;
		}
		ft_putchar('\n');
		y_it++;
	}
}
