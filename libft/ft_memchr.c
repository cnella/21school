/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 12:18:10 by cnella            #+#    #+#             */
/*   Updated: 2018/11/26 16:07:26 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pr;

	pr = (unsigned char*)s;
	while (n > 0)
	{
		if (*pr == (unsigned char)c)
			return ((void*)pr);
		++pr;
		--n;
	}
	return (NULL);
}
