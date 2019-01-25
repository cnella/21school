/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 14:14:53 by cnella            #+#    #+#             */
/*   Updated: 2018/10/23 22:08:11 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	end;

	while (dest[i] != '\0' && i < size)
		i++;
	end = i;
	if (end < size)
	{
		while (src[i - end] != '\0' && i < size - 1)
		{
			dest[i] = src[i - end];
			i++;
		}
		dest[i] = '\0';
	}
	else
		return (end - 1);
	return (i);
}
