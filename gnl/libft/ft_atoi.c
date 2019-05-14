/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:58:26 by cnella            #+#    #+#             */
/*   Updated: 2018/11/29 20:19:40 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_atoi(const char *str)
{
	long long	nb;
	long long	nb2;
	int			neg;
	int			i;

	i = 0;
	neg = 1;
	nb = 0;
	nb2 = 0;
	while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t' ||
		str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == 45)
		neg = -1;
	if (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] > 47 && str[i] < 58)
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
		if (nb2 > nb)
			return (neg > 0 ? -1 : 0);
		nb2 = nb;
	}
	return ((long long)nb * neg);
}
