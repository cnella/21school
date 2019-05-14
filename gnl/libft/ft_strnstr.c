/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 16:12:11 by cnella            #+#    #+#             */
/*   Updated: 2018/11/26 17:20:20 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int j;

	j = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[j] != '\0' && j < (int)len)
	{
		i = 0;
		if (needle[i] == haystack[j])
		{
			while (needle[i] == haystack[i + j] &&
					needle != '\0' && (i + j) < (int)len)
			{
				++i;
				if (needle[i] == '\0')
					return ((char*)(haystack + j));
			}
		}
		++j;
	}
	return (NULL);
}
