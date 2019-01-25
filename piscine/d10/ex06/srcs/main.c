/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:20:32 by cnella            #+#    #+#             */
/*   Updated: 2018/10/30 17:42:16 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int		ft_atoi(char *s1);

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		do_op(int argc, char **argv)
{
	if (argc == 4)
	{
		if (ft_strncmp(argv[2], "+", 1) == 0)
			return (ft_atoi(argv[1]) + ft_atoi(argv[3]));
		if (ft_strncmp(argv[2], "*", 1) == 0)
			return (ft_atoi(argv[1]) * ft_atoi(argv[3]));
		if (ft_strncmp(argv[2], "-", 1) == 0)
			return (ft_atoi(argv[1]) - ft_atoi(argv[3]));
		if (ft_strncmp(argv[2], "/", 1) == 0)
		{
			if (ft_strncmp(argv[3], "0", 1) == 0)
				write(1, "Stop : division by zero\n", 25);
			if (ft_strncmp(argv[3], "0", 1) != 0)
				return (ft_atoi(argv[1]) / ft_atoi(argv[3]));
		}
		if (ft_strncmp(argv[2], "%", 1) == 0)
		{
			if (ft_strncmp(argv[3], "0", 1) == 0)
				write(1, "Stop : modulo by zero\n", 23);
			if (ft_strncmp(argv[3], "0", 1) != 0)
				return (ft_atoi(argv[1]) % ft_atoi(argv[3]));
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int	rez;

	rez = do_op(argc, argv);
	if (argc != 4)
		return (0);
	if ((ft_strncmp(argv[3], "0", 1) == 0) &&
		((ft_strncmp(argv[2], "/", 1) == 0) ||
		 (ft_strncmp(argv[2], "%", 1) == 0)))
		return (0);
	ft_putnbr(rez);
	write(1, "\n", 1);
	return (0);
}
