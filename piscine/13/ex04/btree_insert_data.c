/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 22:30:32 by cnella            #+#    #+#             */
/*   Updated: 2018/11/02 23:16:25 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void		btree_insert_data(t_btree **root, void *item,
			int (*cmpf)(void *, void *))
{
	t_btree	*i;

	if (!root || !item || !*root)
	{
		if (root && item)
			*root = btree_create_node(item);
		return ;
	}
	i = *root;
	if (cmpf(i, i->item) < 0)
	{
		if (i->left)
			btree_insert_data(&i->left, item, cmpf);
		else
			i->left = btree_create_node(item);
	}
	else
	{
		if (i->right)
			btree_insert_data(&i->right, item, cmpf);
		else
			i->right = btree_create_node(item);
	}
}
