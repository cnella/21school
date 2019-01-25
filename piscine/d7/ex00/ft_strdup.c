/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 02:51:30 by cnella            #+#    #+#             */
/*   Updated: 2018/10/25 23:10:14 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		*malloc(size_t size);

char		*ft_strdup(char *src)
{
	size_t	i;
	size_t	len;
	char	*str;

	len = 0;
	while (src[len] != '\0')
		len++;
	str = malloc(sizeof(*src) * len);
	if (str == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
