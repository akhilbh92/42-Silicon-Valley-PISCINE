/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:03:07 by oaaron            #+#    #+#             */
/*   Updated: 2018/07/11 21:49:44 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "bsq.h"
#include "strhelpers.h"

int		handle_input(int fd)
{
	char	*buff;
	char	*temp_buff;
	size_t	buff_size;
	size_t	len;
	size_t	ret;

	len = 0;
	buff_size = 1;
	buff = malloc(sizeof(char) * (buff_size + 1));
	while ((ret = read(fd, buff + len, buff_size)) > 0)
	{
		len += ret;
		buff[len] = '\0';
		temp_buff = buff;
		if (buff_size < 536870912)
			buff_size *= 2;
		buff = malloc(sizeof(char) * (len + buff_size + 1));
		ft_strcpy(buff, temp_buff);
		free(temp_buff);
	}
	close(fd);
	if (len != 0 && !bsq(buff))
		len = 0;
	free(buff);
	return (len);
}

int		handle_file_pre(char *file)
{
	if (open(file, O_RDONLY) != 3)
	{
		return (0);
	}
	return (handle_input(3));
}

int		main(int argc, char **argv)
{
	int		i;

	if (argc == 1)
	{
		if (!handle_input(0))
			ft_putstr("map error\n");
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			if (!handle_file_pre(argv[i]))
			{
				ft_putstr("map error\n");
			}
			if (i != argc - 1)
			{
				ft_putchar('\n');
			}
			i++;
		}
	}
	return (0);
}
