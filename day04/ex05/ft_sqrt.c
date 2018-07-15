/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 10:50:53 by abhaviri          #+#    #+#             */
/*   Updated: 2018/06/23 17:00:40 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int counter;

	counter = 0;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (nb);
	while (counter <= nb / 2)
	{
		if (nb == (counter * counter))
			return (counter);
		counter++;
	}
	return (0);
}
