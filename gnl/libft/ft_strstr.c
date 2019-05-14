/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 16:12:11 by cnella            #+#    #+#             */
/*   Updated: 2018/11/26 17:13:56 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int j;

	j = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[j] != '\0')
	{
		i = 0;
		if (needle[i] == haystack[j])
		{
			while (needle[i] == haystack[i + j] && needle != '\0')
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
