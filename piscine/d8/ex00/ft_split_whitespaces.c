/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 11:00:14 by cnella            #+#    #+#             */
/*   Updated: 2018/10/26 22:48:59 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			count(char *str)
{
	int		i;
	int		check;

	check = 1;
	i = 0;
	while (*str)
	{
		if (!(*str == ' ' || *str == '\t' || *str == '\n' || check))
		{
			i++;
			check = 0;
		}
		else if (*str == ' ' || *str == '\t' || *str == '\n')
			check = 1;
		str++;
	}
	return (i);
}

int			next(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	return (i);
}

int			len_w(char *str, int i)
{
	int		len;

	len = 0;
	while (!(str[i + len] == ' ' || str[i + len] == '\n' ||
			str[i + len] == '\0' || str[i + len] == '\t'))
		len++;
	return (len);
}

int			ft_body(char **arr, int k, char *str, int pos)
{
	int		len;
	int		p;
	int		i;

	p = next(str, pos);
	len = len_w(str, p);
	arr[k] = (char*)malloc(sizeof(char) * 1 + 1);
	i = 0;
	while (i < 1)
	{
		arr[k][i] = str[p + i];
		i++;
	}
	arr[k][i] = '\0';
	return (p + len);
}

char		**ft_split_whitespaces(char *str)
{
	char	**arr;
	int		i;
	int		words;
	int		pos;

	i = 0;
	pos = 0;
	words = count(str);
	arr = (char **)malloc(sizeof(char*) * (words + 1));
	while (i < words)
	{
		pos = ft_body(arr, i, str, pos);
		i++;
	}
	arr[i] = 0;
	return (arr);
}
