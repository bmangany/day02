/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:00:57 by bmangany          #+#    #+#             */
/*   Updated: 2020/06/23 15:47:11 by bmangany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb<0)
	{
		ft_putchar('-');
		nb = -nb;
	}

	if (nb/10 > 0)
	{
		ft_putchar(nb/10);
		ft_putchar(nb%10 + '0');
	}
}

