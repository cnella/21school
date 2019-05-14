/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 12:53:47 by cnella            #+#    #+#             */
/*   Updated: 2018/11/30 20:28:21 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_w(const char *s, char c)
{
	int		count;
	int		i;
	int		len;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			len = 0;
			while (s[i + len] && (s[i + len] != c))
				len++;
			count++;
			i += len;
		}
	}
	return (count);
}

char		**ft_strsplit(const char *s, char c)
{
	char	**rez;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s || !(rez = (char**)malloc(sizeof(char*) * (count_w(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (s[i] != '\0')
		{
			len = 0;
			while (s[i + len] && (s[i + len] != c))
				len++;
			rez[j] = ft_strsub(s, i, len);
			j++;
			i += len;
		}
	}
	*(rez + j) = NULL;
	return (rez);
}
