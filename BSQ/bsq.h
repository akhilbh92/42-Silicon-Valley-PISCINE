/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:22:58 by oaaron            #+#    #+#             */
/*   Updated: 2018/07/10 19:34:23 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

typedef struct	s_map_info
{
	char	empty;
	char	obstacle;
	char	full;
	int		lines;
	int		linelength;
	int		biggestr;
	int		biggestc;
	int		max;
	int		found;
}				t_map_info;

t_map_info		g_mapinfo;

int				bsq(char *contents);
int				parse_map(char *info, int infolen);

#endif
