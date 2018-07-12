/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strhelpers2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 21:18:16 by oaaron            #+#    #+#             */
/*   Updated: 2018/07/10 20:21:07 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strhelpers2.h"
#include "strhelpers.h"

char	*ft_strremoveto(char *str, char ch)
{
	char	*final_str;
	int		i;
	int		j;

	i = 0;
	final_str = malloc(sizeof(char) * ft_strlento(str, '\0') + 1);
	while (str[i] != '\0')
	{
		if (str[i] == ch)
		{
			j = 0;
			while (str[i] != '\0')
			{
				final_str[j] = str[i + 1];
				i++;
				j++;
			}
			final_str[j] = '\0';
			return (final_str);
		}
		i++;
	}
	free(final_str);
	final_str = malloc(0);
	return (final_str);
}

int		ft_atoi(const char *str)
{
	int result;
	int sign;
	int i;

	i = 0;
	while (str[i] >= 0 && str[i] <= 32)
		i++;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+' && sign != -1)
		i++;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (sign * result);
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

int		is_digits(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		ft_charcount(char *str, char ch)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
		{
			count++;
		}
		i++;
	}
	return (count);
}
