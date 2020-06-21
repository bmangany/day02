/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 10:53:13 by bmangany          #+#    #+#             */
/*   Updated: 2020/06/21 15:21:41 by bmangany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	write(1, &n, 1);
}

void	ft_is_negative()
{
	int n;
	n = 0;
	while(n >= -1 &&  n <= 1)
	{
		if(n < 0)
			ft_putchar('N');
		else if(n == 0 || n =='\0' || n > 0)
			ft_putchar('P');
		break;
	}
}
