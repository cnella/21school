/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 10:27:22 by cnella            #+#    #+#             */
/*   Updated: 2018/10/31 14:46:07 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*i;

	i = *begin_list;
	if (!i)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (i->next != 0)
		i = i->next;
	i->next = ft_create_elem(data);
}
