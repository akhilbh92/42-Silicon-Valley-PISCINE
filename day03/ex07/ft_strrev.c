/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 14:11:20 by abhaviri          #+#    #+#             */
/*   Updated: 2018/06/22 15:42:10 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		temp;
	int		counter;
	int		i;

	counter = 0;
	i = 0;
	while (str[counter])
		counter++;
	while (i < counter - 1)
	{
		temp = str[i];
		str[i] = str[counter - 1];
		str[counter - 1] = temp;
		counter--;
		i++;
	}
	return (str);
}
