/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:11:43 by cnella            #+#    #+#             */
/*   Updated: 2018/10/30 21:29:25 by cnella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				ft_swap(char **a, char **b)
{
	char			*c;

	c = *a;
	*a = *b;
	*b = c;
}

int                 ft_strncmp(char *s1, char *s2)
{
	unsigned int    i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && s2[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

void				ft_sort_wordtab(char **tab)
{
	int				i;
	int				j;

	i = 0;
	while(tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (tab[j + 1] && ft_strncmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}	
