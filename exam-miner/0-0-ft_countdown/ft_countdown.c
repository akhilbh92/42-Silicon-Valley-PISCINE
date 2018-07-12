/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 11:17:05 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/06 11:22:56 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int temp;

	temp = 10;
	while (temp-- >= 0)
		ft_putchar(temp + '0');
	ft_putchar('\n');
	return (0);
}
