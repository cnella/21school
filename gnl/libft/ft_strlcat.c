/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 12:28:35 by cnella            #+#    #+#             */
/*   Updated: 2018/11/28 22:06:19 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	rez;

	i = 0;
	while (dst[i] != '\0')
		++i;
	rez = 0;
	while (src[rez] != '\0')
		++rez;
	if (size < i)
		rez += size;
	else
		rez += i;
	j = 0;
	while (src[j] != '\0' && (int)i + (int)j < (int)size - 1)
	{
		*(dst + i + j) = src[j];
		++j;
	}
	*(dst + i + j) = '\0';
	return (rez);
}
