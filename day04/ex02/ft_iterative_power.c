/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 01:19:51 by abhaviri          #+#    #+#             */
/*   Updated: 2018/06/23 01:27:42 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;
	int counter;

	result = 1;
	counter = 0;
	if (power < 0 || nb == 0)
		return (0);
	if (power == 0)
		return (1);
	while (counter < power)
	{
		result = result * nb;
		counter++;
	}
	return (result);
}
