/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:45:24 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/06 15:03:34 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int num;

	if (argc == 2)
	{
		while (*argv[1])
		{
			num = 0;
			if (*argv[1] >= 'A' && *argv[1] <= 'Z')
				num = *argv[1] - 'A' + 1;
			while (num)
			{
				ft_putchar(*argv[1]);
				num--;
			}
			argv[1]++;
		}
	}
	ft_putchar('\n');
	return (0);
}
