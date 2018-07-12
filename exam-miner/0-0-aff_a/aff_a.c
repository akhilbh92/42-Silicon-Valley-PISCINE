/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 11:00:23 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/06 11:14:58 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "a", 1);
	}
	else
	{
		while (*argv[1])
		{
			if (*argv[1] == 'a')
			{
				write (1, "a", 1);
				break;
			}
			argv[1]++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
