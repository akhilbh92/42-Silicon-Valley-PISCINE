/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 16:14:35 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/08 22:09:29 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include <fcntl.h>

#define BUF_SIZE 10000

int		main(void)
{
	char	input[1];
	char	input1[BUF_SIZE + 1];
	int		i;

	i = 0;
	while (read(0, input, 1))
	{
		input1[i] = input[0];
		i++;
	}
	input1[i] = '\0';
	if (input1[0] == '\0')
	{
		write(1, "aucune\n", 7);
		return (0);
	}
	if (is_valid(input1, ft_count_rows(input1), ft_count_cols(input1)))
		ft_get_rush(input1);
	return (0);
}
