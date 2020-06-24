/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:04:32 by bmangany          #+#    #+#             */
/*   Updated: 2020/06/24 16:34:59 by bmangany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn()
{
	int i;
	int j;
	i = 0;

	while (i <= '1')
	{
		j = i + 1;
		{
			ft_putchar(i);
			ft_putchar(j);
			ft_putchar(',');
			ft_putchar(' ');
			j = j + 1;
		}
		i = i + 1;
	}
}
