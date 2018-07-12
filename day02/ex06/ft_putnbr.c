/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 17:13:25 by abhaviri          #+#    #+#             */
/*   Updated: 2018/06/21 21:57:50 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int	temp[2];

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = 147483648;
		}
	}
	temp[0] = nb;
	temp[1] = 1;
	while ((temp[0] /= 10) > 0)
		temp[1] *= 10;
	temp[0] = nb;
	while (temp[1])
	{
		ft_putchar(temp[0] / temp[1] + '0');
		temp[0] %= temp[1];
		temp[1] /= 10;
	}
}
