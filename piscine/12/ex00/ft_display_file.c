/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 16:40:14 by cnella            #+#    #+#             */
/*   Updated: 2018/11/01 20:19:27 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int			main(int argc, char **argv)
{
	int		fd;
	char	ch;

	if (argc < 2)
		write(2, "File name missing.\n", 20);
	if (argc > 2)
		write(2, "Too many arguments.\n", 21);
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
		{
			write(2, "File name missing.\n", 20);
			return (0);
		}
		while (read(fd, &ch, 1))
			write(1, &ch, 1);
		close(fd);
	}
	return (0);
}
