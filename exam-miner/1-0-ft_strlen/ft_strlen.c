/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:39:42 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/06 14:43:33 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

// DO NOT SUBMIT ANYTHING BELOW

#include <stdio.h>

int main (void)
{
	char str[] = "Flavio";

	printf("%d\n", ft_strlen(str));
	return (0);
}
