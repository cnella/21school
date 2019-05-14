/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:04:33 by cnella            #+#    #+#             */
/*   Updated: 2018/11/30 16:56:10 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*p1;
	t_list	*p2;

	if (alst && *alst)
	{
		p1 = *alst;
		while (p1)
		{
			p2 = p1;
			ft_lstdelone(&p1, del);
			p1 = p2->next;
		}
		*alst = NULL;
	}
}
