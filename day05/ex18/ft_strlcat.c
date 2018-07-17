/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 14:54:44 by abhaviri          #+#    #+#             */
/*   Updated: 2018/06/26 20:57:57 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int max_dest_size;
	unsigned int initial_dest_size;
	unsigned int max_loop;

	i = 0;
	j = 0;
	k = 0;
	max_dest_size = 0;
	max_loop = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	printf("Initial dest size is :%d,src size is : %d, given size is%d\n", i, j, size);
	max_dest_size = j + ((i > size) ? size : i);
	printf("Max Dest size possible is %d\n", max_dest_size);
	if (size == 0)
	{
		return (max_dest_size);
	}
	max_loop = (max_dest_size > size ? size : max_dest_size);
	printf("Max loop possible is%d\n", max_loop);
	initial_dest_size = i;
	while (i < max_loop)
	{
		printf("dest index: %d, dest[i] :%c, src[k]: %c\n", i, dest[i], src[k]);
		dest[i] = src[k];
		k++;
		i++;
	}

	dest[max_loop] = '\0';
	return (max_dest_size);
}
