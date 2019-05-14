/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:32:35 by cnella            #+#    #+#             */
/*   Updated: 2018/11/28 21:15:15 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*rez;
	char	*ss;
	char	*res;

	if (!s || !(rez = (char*)malloc(sizeof(char) * (ft_strlen((char*)s) + 1))))
		return (NULL);
	ss = (char*)s;
	res = rez;
	while (*ss)
	{
		*rez = f(*ss);
		++ss;
		++rez;
	}
	*rez = '\0';
	return (res);
}
