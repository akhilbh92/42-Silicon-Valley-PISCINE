/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:13:56 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/06 14:18:59 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if (argc >= 2)
	{
		while(*argv[1])
		{
			ft_putchar(*argv[1]);
			argv[1]++;
		}
	}
	ft_putchar('\n');
	return (0);
}
