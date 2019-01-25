/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 05:14:40 by cnella            #+#    #+#             */
/*   Updated: 2018/10/26 15:31:26 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
void	*malloc(size_t size);

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int *j;

	i = 0;
	if (max <= min)
	{
		*range = (void *)0;
		return (0);
	}
	j = (int*)malloc(sizeof(int) * (max - min));
	while (max > min)
	{
		j[i] = min;
		i++;
		min++;
	}
	*range = j;
	return (i);
}

int main()
{
	int min = 3;
	int max = 4;
	int **range = (int**)malloc(sizeof(int**));

	min = ft_ultimate_range(range, min, max);
	printf("%d", min);
	return (0);
}
