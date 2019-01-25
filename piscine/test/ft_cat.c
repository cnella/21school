/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 16:40:14 by cnella            #+#    #+#             */
/*   Updated: 2018/11/01 21:53:47 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>

void		ft_putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		write(2, &s[i], 1);
		i++;
	}
}

void		check_err(int e)
{
	if (e == 21)
		ft_putstr(": Is a directory\n");
	else if (e == 2)
		ft_putstr(": No such file or directory\n");
	else if (e == 7)
		ft_putstr(": Arguments list too long\n");
	else 
		ft_putstr(": Permission denied\n");
}

void		ft_cat(int argc, char **argv)
{
	char	ch;
	int		fd;
	int		i;

	i = 0;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd >= 0)
		{
			while (read(fd, &ch, 1) != 0)
				write(1, &ch, 1);
		}
		else
		{
			ft_putstr("ft_cat: ");
			ft_putstr(argv[i]);
			check_err(errno);
		}
		close(fd);
		i++;
	}
}

int			main(int argc, char **argv)
{
	char	ch;

	if (argc < 2 || argv[1][0] == '-')
	{
		while (read(0, &ch, 1) != 0)
			write(1, &ch, 1);
	}
	else
		ft_cat(argc, argv);
	return (0);
}
