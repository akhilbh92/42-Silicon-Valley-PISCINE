/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 02:16:28 by abhaviri          #+#    #+#             */
/*   Updated: 2018/06/26 21:05:47 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || !check_alpha(str[i - 1]))
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}
