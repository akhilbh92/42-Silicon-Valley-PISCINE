/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 09:15:37 by abhaviri          #+#    #+#             */
/*   Updated: 2018/06/21 20:53:17 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int digits[2];

	digits[0] = 0;
	while (digits[0] < 100)
	{
		digits[1] = digits[0] + 1;
		while (digits[1] < 100)
		{
			ft_putchar(digits[0] / 10 + '0');
			ft_putchar(digits[0] % 10 + '0');
			ft_putchar(' ');
			ft_putchar(digits[1] / 10 + '0');
			ft_putchar(digits[1] % 10 + '0');
			if (digits[0] != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			digits[1]++;
		}
		digits[0]++;
	}
}
