/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaviri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:50:42 by abhaviri          #+#    #+#             */
/*   Updated: 2018/06/21 16:50:59 by abhaviri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_combn(int n)
{
  
}

int main(void) {
  int n;

  n=2;
  ft_print_combn(n);
  return 0;
}
