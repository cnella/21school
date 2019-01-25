/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 20:37:01 by cnella            #+#    #+#             */
/*   Updated: 2018/10/23 20:20:17 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if ((str[i] > 96 && str[i] < 123) || (str[i] > 47 && str[i] < 58) ||
			(str[i] > 64 && str[i] < 91))
		{
			if (check && (str[i] > 96 && str[i] < 123))
				str[i] -= 32;
			else if (!check && (str[i] > 64 && str[i] < 91))
				str[i] += 32;
			check = 0;
		}
		else
			check = 1;
		i++;
	}
	return (str);
}
