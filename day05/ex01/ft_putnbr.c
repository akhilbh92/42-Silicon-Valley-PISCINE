/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 11:23:46 by abhaviri          #+#    #+#             */
/*   Updated: 2018/06/25 17:30:23 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int data[2];

	data[1] = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb = -nb;
	}
	data[0] = nb;
	while ((data[0] /= 10) > 0)
	{
		data[1] *= 10;
	}
	while (data[1])
	{
		ft_putchar((nb / data[1]) + '0');
		nb = nb % data[1];
		data[1] /= 10;
	}
}
