/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 20:31:02 by cnella            #+#    #+#             */
/*   Updated: 2018/10/20 22:13:24 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int	k;

	if (nb < 2)
		return (0);
	k = 2;
	while (k * 2 <= nb)
	{
		if (nb % k == 0)
			return (0);
		k++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		nb = 2;
	i = nb;
	while (i < 2 * nb)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
