/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:02:32 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/06 14:12:39 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c ,1);
}
void ft_str_uppercase(char c)
{
	char tmp;

	tmp = c - 32;
	ft_putchar(tmp);
}
int main(void)
{
	int i;
	char alpha;

	i = 1;
	alpha = 'a';
	while (i < 27)
	{
		if (i % 2 == 0)
			ft_str_uppercase(alpha);
		else
			ft_putchar(alpha);
		alpha++;
		i++;
	}
	ft_putchar('\n');
	return (0);
}
