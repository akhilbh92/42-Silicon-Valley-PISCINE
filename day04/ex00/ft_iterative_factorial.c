/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 00:27:56 by abhaviri          #+#    #+#             */
/*   Updated: 2018/06/23 16:58:16 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;
	int counter;

	result = 1;
	counter = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb < 2)
		return (result);
	else
	{
		while (counter <= nb)
		{
			result = result * counter;
			counter++;
		}
		return (result);
	}
}
