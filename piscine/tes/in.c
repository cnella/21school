/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:57:11 by cnella            #+#    #+#             */
/*   Updated: 2018/11/07 21:27:27 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int	b[128];
	int	i;
	char c;

	i = 0;
	while (i < 128)
		b[i++] = 0;
	i = 0;
	while (s2[i])
	{
		if (b[(int)s2[i]] == 0)
			b[(int)s2[i]] = 1;
		i++;
	}
	i = 0;
	while (s1[i])
	{
		if (b[(int)s1[i]] == 1)
		{
			c = i;
			write(1, &c, 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	inter(argv[1], argv[2]);
	return (0);
}
