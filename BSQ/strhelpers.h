/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strhelpers.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:23:07 by oaaron            #+#    #+#             */
/*   Updated: 2018/07/10 20:16:09 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRHELPERS_H
# define STRHELPERS_H

# include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlento(char *str, char ch);
void	ft_putchar(char ch);
void	ft_putstr(char *str);

#endif
