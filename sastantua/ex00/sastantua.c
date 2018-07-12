/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 22:09:37 by abhaviri          #+#    #+#             */
/*   Updated: 2018/06/24 22:11:33 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_line_width(int size, int line)
{
	int maxwidth;
	int width;
	int info[3];

	width = 1;
	info[0] = 1;
	info[2] = 0;
	while (info[0] <= size)
	{
		info[1] = 1;
		while (info[1] <= info[0] + 2)
		{
			info[2]++;
			if (info[2] == line)
			{
				maxwidth = width;
			}
			width += 2;
			info[1]++;
		}
		width += 4;
		info[0]++;
	}
	return (maxwidth);
}

int		ft_max_width(int size)
{
	int maxwidth;
	int width;
	int i;
	int j;

	width = 1;
	i = 1;
	while (i <= size)
	{
		j = 1;
		while (j <= i + 2)
		{
			maxwidth = width;
			width += 2;
			j++;
		}
		width += 4;
		i++;
	}
	return (maxwidth);
}

void	ft_print_line(int info[4], int size, int door, int doorhandle)
{
	int i;
	int j;
	int m;

	m = (ft_line_width(size, info[0]) / 2) + 1;
	i = 1;
	while (i <= info[2])
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('/');
	j = 1;
	while (j <= info[1])
	{
		if (door == 1 && size >= 5 && j == m + info[3] / 2 - 1 && doorhandle)
			ft_putchar('$');
		else if (door == 1 && j >= m - info[3] / 2 && j <= m + info[3] / 2)
			ft_putchar('|');
		else
			ft_putchar('*');
		j++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	ft_handle_print_line(int info[6], int size)
{
	int printinfo[4];

	printinfo[0] = info[5];
	printinfo[1] = info[2];
	printinfo[2] = info[3];
	printinfo[3] = info[4];
	if (info[0] == size)
	{
		if (info[1] == (info[0] + 2 - info[4] / 2))
			ft_print_line(printinfo, size, 1, 1);
		else if (info[0] + 3 - info[4] <= info[1])
			ft_print_line(printinfo, size, 1, 0);
		else
			ft_print_line(printinfo, size, 0, 0);
	}
	else
		ft_print_line(printinfo, size, 0, 0);
}

void	sastantua(int size)
{
	int info[6];

	info[5] = 1;
	info[4] = (size % 2 == 1) ? size : size - 1;
	info[3] = ft_max_width(size) / 2;
	info[2] = 1;
	info[0] = 1;
	while (info[0] <= size)
	{
		info[1] = 1;
		while (info[1] <= info[0] + 2)
		{
			ft_handle_print_line(info, size);
			info[2] += 2;
			info[3]--;
			info[1]++;
			info[5]++;
		}
		info[2] += 4;
		info[3] -= 2;
		info[0]++;
	}
}
