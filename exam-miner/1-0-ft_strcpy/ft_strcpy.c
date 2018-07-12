/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:31:24 by abhaviri          #+#    #+#             */
/*   Updated: 2018/07/06 14:38:38 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = -1;
	while(s2[++i])
		s1[i] = s2[i];
	s1[i] = s2[i];
	return s1;
}

#include <stdio.h>

int main(void)
{
	char str1[] = "Flaviofgh";
	char str2[] = "Gaucho";

	printf("%s\n", str1);
	ft_strcpy(str1, str2);
	printf("%s\n", str1);
	return (0);
}
