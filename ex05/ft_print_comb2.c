/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:54:02 by bmangany          #+#    #+#             */
/*   Updated: 2020/06/21 15:52:39 by bmangany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int d)
{
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	i = 0;
	
	while(i <= 99)
	{
		j = i + 1;
			while(j <= 99)
			{
				ft_putchar(i/10 + '0');
				ft_putchar(i%10 + '0');
				ft_putchar(' ');
				ft_putchar(j/10 + '0');
				ft_putchar(j%10 + '0');
				ft_putchar(',');
				ft_putchar(' ');
				j++;
			}
			i = i + 1;
	}
}
