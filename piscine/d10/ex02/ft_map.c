/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:18:59 by cnella            #+#    #+#             */
/*   Updated: 2018/10/30 19:13:47 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		*ftmap(int *tab, int length, int (*f)(int))
{
	int	*str;

	str = (int *)malloc(sizeof(int) * (length));
	*str = f(*tab);
	while (length > 0)
	{
		*(str++) = f(*(tab++));
		length--;
	}
	return (str);
}
int fpl(int a)
{
	a = a+1;
	return(a);
}
int main()
{
	int	a[] = {1,2,3};
	int *c;

	c = ftmap(a, 3, &fpl);
	printf("%d", c[0]);
	printf("%d", c[1]);
	printf("%d", c[2]);
}

