/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:21:15 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/06 14:25:38 by abhaviri         ###   ########.fr       */
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
			while(*argv[argc - 1])
			{
			ft_putchar(*argv[argc - 1]);
			argv[argc - 1]++;
			}
	}
	ft_putchar('\n');
	return (0);
}
