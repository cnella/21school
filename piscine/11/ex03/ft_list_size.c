/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 15:04:45 by cnella            #+#    #+#             */
/*   Updated: 2018/10/31 15:11:09 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int	i;

	if (!begin_list)
		return (0);
	while (*begin_list->next != 0)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i + 1);
}
