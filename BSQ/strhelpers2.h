/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strhelpers2.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 21:15:16 by oaaron            #+#    #+#             */
/*   Updated: 2018/07/11 16:51:49 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRHELPERS2_H
# define STRHELPERS2_H

# include <stdlib.h>

char	*ft_strremoveto(char *str, char ch);
int		ft_charcount(char *str, char ch);
int		is_digits(const char *str);
int		ft_atoi(const char *str);

#endif
