/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 19:43:02 by cnella            #+#    #+#             */
/*   Updated: 2018/11/30 19:51:54 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*tmp;
	size_t	len;

	if (!s)
		return (NULL);
	tmp = (char*)s;
	while (space(*tmp))
		tmp++;
	len = ft_strlen(tmp);
	if (len)
	{
		while (space(tmp[--len]) || *tmp == '\0')
			;
		tmp = ft_strsub(tmp, 0, (len + 1));
	}
	else
	{
		if (!(tmp = (char*)malloc(sizeof(char) * 1)))
			return (NULL);
		*tmp = '\0';
	}
	return (tmp);
}
