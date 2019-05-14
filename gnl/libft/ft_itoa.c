/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:02:32 by cnella            #+#    #+#             */
/*   Updated: 2018/11/30 18:12:47 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int			len(unsigned int nb)
{
	unsigned int	size;

	size = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		++size;
	}
	return (size);
}

char				*ft_itoa(int n)
{
	unsigned int	nb;
	unsigned int	size;
	char			*str;
	int				i;

	if (n < 0)
		nb = n * (-1);
	else
		nb = n;
	size = len(nb);
	if (!(str = (char*)malloc(sizeof(char) * (size + 1 + (n < 0 ? 1 : 0)))))
		return (0);
	if (n < 0)
		++size;
	i = size - 1;
	str[size] = '\0';
	str[0] = '0';
	while (nb > 0)
	{
		str[i--] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		str[i] = '-';
	return (str);
}
