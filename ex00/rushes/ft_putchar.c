/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:18:16 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/08 21:26:00 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rushes.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
