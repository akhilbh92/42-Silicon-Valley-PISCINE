/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 23:02:39 by abhaviri          #+#    #+#             */
/*   Updated: 2018/06/26 21:04:40 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	track_size;
	int				should_fill;

	track_size = 0;
	should_fill = 0;
	while (track_size < n)
	{
		if (should_fill && track_size < n)
			dest[track_size] = '\0';
		if (src[track_size] == '\0' && track_size < n)
		{
			dest[track_size] = '\0';
			should_fill = 1;
		}
		if (!should_fill)
			dest[track_size] = src[track_size];
		track_size++;
	}
	return (dest);
}
