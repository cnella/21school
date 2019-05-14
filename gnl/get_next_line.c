/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 16:55:53 by cnella            #+#    #+#             */
/*   Updated: 2019/01/29 18:26:54 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		copyline(char **line, char *content, char c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = *line;
	while (content[i] && content[i] != c)
		i++;
	if (!(*line = ft_strndup(content, i)))
		return (0);
	return (i);
}

static t_list	*get_file(int fd, t_list **file)
{
	t_list	*tmp;

	if (!file)
		return (NULL);
	tmp = *file;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("", fd);
	ft_lstadd(file, tmp);
	return (tmp);
}

static int		readline(const int fd, char **content)
{
	int		rfd;
	char	*tmp;
	char	buf[BUFF_SIZE + 1];

	while ((rfd = read(fd, buf, BUFF_SIZE)))
	{
		buf[rfd] = '\0';
		tmp = *content;
		if (!(*content = ft_strjoin(*content, buf)))
			return (-1);
		free(tmp);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (rfd);
}

int				get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	size_t			rfd;
	static t_list	*file;
	t_list			*current;
	char			*tmp;

	if (fd < 0 || !line || (read(fd, buf, 0)) < 0 ||
			(!(current = get_file(fd, &file))))
		return (-1);
	tmp = current->content;
	rfd = readline(fd, &tmp);
	current->content = tmp;
	if (!rfd && !*tmp)
		return (0);
	rfd = copyline(line, current->content, '\n');
	tmp = current->content;
	if (tmp[rfd] != '\0')
	{
		current->content = ft_strdup(&((current->content)[rfd + 1]));
		free(tmp);
	}
	else
		tmp[0] = '\0';
	return (1);
}
