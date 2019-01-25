/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 17:36:18 by cnella            #+#    #+#             */
/*   Updated: 2018/10/31 18:59:42 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;
	t_list	*first;

	if (ac < 2)
		return (NULL);
	i = 1;
	list = ft_create_elem(av[i]);
	first = list;
	i++;
	while (i < ac)
	{
		list->next = ft_create_elem(av[i]);
		list = list->next;
		i++;
	}
	return (first);
}
