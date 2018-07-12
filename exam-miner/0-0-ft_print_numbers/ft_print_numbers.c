/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 12:40:19 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/06 12:46:33 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int i;

	i = -1;
	while(++i < 10)
	{
		ft_putchar(i + '0');
		if (i < 9)
			ft_putchar(',');
	}
}

int main(void)
{
	ft_print_numbers();
	return(0);
}
