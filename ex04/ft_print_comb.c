/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:16:32 by bmangany          #+#    #+#             */
/*   Updated: 2020/06/21 15:50:51 by bmangany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int d)
{
	write(1, &d, 1);
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;
	i = '0';

		while(i <= '3')
		{
			j = i + 1;
			while(j <= '6')
			{
				k = i + 1;
				while(k <= '9')
				{
					ft_putchar(i);
					ft_putchar(j);
					ft_putchar(k);
					ft_putchar(',');
					ft_putchar(' ');
					k = k + 1;
				}
				j = j + 1;
			}
			i = i + 1;
		}
}
