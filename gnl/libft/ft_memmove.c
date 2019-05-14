/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:40:34 by cnella            #+#    #+#             */
/*   Updated: 2018/11/30 16:28:30 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	i = 0;
	p1 = (unsigned char*)dst;
	p2 = (unsigned char*)src;
	if (p2 < p1)
		while (++i <= len)
			p1[len - i] = p2[len - i];
	else
		while (len-- > 0)
			*(p1++) = *(p2++);
	return (dst);
}
