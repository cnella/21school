/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 22:28:49 by cnella            #+#    #+#             */
/*   Updated: 2018/10/24 23:27:52 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void		ft_sort(int max, char **ss)
{
	char	*str;
	int		check;
	int		i;

	check = 1;
	while (check == 1)
	{
		check = 0;
		i = 1;
		while (i < max - 1)
		{
			if (ft_strcmp(ss[i], ss[i + 1]) > 0)
			{
				str = ss[i];
				ss[i] = ss[i + 1];
				ss[i + 1] = str;
				check = 1;
			}
			i++;
		}
	}
}

int			main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	ft_sort(argc, argv);
	while (argv[i][j] != '\0')
	{
		ft_putchar(argv[i][j]);
		j++;
		if (argv[i][j] == '\0' && argc > 2)
		{
			i++;
			argc -= 1;
			j = 0;
			ft_putchar('\n');
		}
	}
	ft_putchar('\n');
	return (0);
}
