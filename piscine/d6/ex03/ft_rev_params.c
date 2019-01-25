/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 19:39:28 by cnella            #+#    #+#             */
/*   Updated: 2018/10/24 20:39:59 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc;
	j = 0;
	while (argv[i][j] != '\0')
	{
		ft_putchar(argv[i][j]);
		j++;
		if (argv[i][j] == '\0' && argc > 2)
		{
			i--;
			argc -= 1;
			j = 0;
			ft_putchar('\n');
		}
	}
	ft_putchar('\n');
	return (0);
}
