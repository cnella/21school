/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 03:24:45 by cnella            #+#    #+#             */
/*   Updated: 2018/10/25 23:11:47 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		*malloc(size_t size);

int			*ft_range(int min, int max)
{
	int		i;
	int		*array;

	i = 0;
	if (min >= max)
		return (NULL);
	array = malloc(sizeof(*array) * (max - min));
	while (min + i < max)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
