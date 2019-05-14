/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:32:35 by cnella            #+#    #+#             */
/*   Updated: 2018/11/28 21:07:04 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*rez;
	unsigned int	i;

	if (!s || !(rez = (char*)malloc(sizeof(char) * (ft_strlen((char*)s) + 1))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		rez[i] = f(i, s[i]);
		++i;
	}
	rez[i] = '\0';
	return (rez);
}
