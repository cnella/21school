/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 19:21:37 by cnella            #+#    #+#             */
/*   Updated: 2018/10/31 21:13:09 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_clear(t_list **begin_list)
{
	t_list	*i;

	if ((*begin_list)->next)
	{
		i = (*begin_list)->next;
		ft_list_clear(&i);
	}
	free(*begin_list);
	*begin_list = NULL;
}
