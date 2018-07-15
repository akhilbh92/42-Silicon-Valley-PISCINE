/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 14:42:28 by abhaviri          #+#    #+#             */
/*   Updated: 2018/06/23 20:12:09 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 3)
		return (2);
	while (i <= nb)
	{
		if ((nb % i == 0) && i != nb)
			return (ft_find_next_prime(nb + 1));
		if ((nb % i == 0) && i == nb)
			return (nb);
		i++;
	}
	return (0);
}
