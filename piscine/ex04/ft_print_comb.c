/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 19:38:15 by cnella            #+#    #+#             */
/*   Updated: 2018/10/18 23:23:42 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int a;

	a = 112;
	while (a / 100 <= 7)
	{
		while (a / 10 - a / 100 * 10 <= a / 100)
		{
			while (a % 10 <= a / 10 - a / 100 * 10)
			{
				ft_putchar(a / 100);
				ft_putchar(a / 10 - a / 100 * 10);
				ft_putchar(a % 10);
				if (a < 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
					a++;
				}
			}
			a++;
		}
		a++;
	}
}
