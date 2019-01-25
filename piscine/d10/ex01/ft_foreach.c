/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:12:13 by cnella            #+#    #+#             */
/*   Updated: 2018/10/30 19:07:46 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void jh(int a)
{
	printf("%d", a);
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	while (length--)
		f(*tab++);
}

int main()
{
	int a[] = {1, 2, 3, 4, 5};

	ft_foreach(a, 5, &jh);
}

