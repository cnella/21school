/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:51:35 by cnella            #+#    #+#             */
/*   Updated: 2018/11/28 23:01:56 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*rez;
	int		i;

	i = 0;
	if (!(rez = (char*)malloc(sizeof(char) * (len + 1))) || !s)
		return (NULL);
	while (len > 0)
	{
		rez[i] = s[start];
		++start;
		i++;
		--len;
	}
	rez[i] = '\0';
	return (rez);
}
