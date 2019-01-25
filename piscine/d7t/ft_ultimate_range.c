/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 03:24:45 by cnella            #+#    #+#             */
/*   Updated: 2018/10/25 16:02:56 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
void		*malloc(size_t size);

int     ft_ultimate_range(int **range, int min, int max)
{
	int i;
	i = 0;
	    if (max <= min)
			        return (i);
		    *range = (int*)malloc(sizeof(int) * (max - min));
			    while (max > min + i)
					    {
							        *range[i] = min + i;
									        i++;
											    }
				    return(i);
}

int	main()
{
	int min;
	int max;
	int k;
	int	**range;
	min = -43;
	max = -3;
	*range = &min;
	k = ft_ultimate_range(*range, min, max);
	while (min < max)
	{
		printf("%d", min);
	   	min++;
	}
	printf("\n%d", k);	
	return(0);
}
