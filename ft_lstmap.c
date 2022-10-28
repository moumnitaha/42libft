/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:16:42 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/28 18:41:47 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*maped_list;
	t_list	*tmp;

	tmp = lst;
	maped_list = malloc(ft_lstsize(lst) * sizeof(t_list) + 1);
	if (!maped_list)
		return (NULL);
	while (tmp)
	{
		if (tmp->content)
			f(tmp->content);
		else
		{
			del(tmp->content);
			free(tmp);
		}
		tmp = tmp->next;
	}
	maped_list = lst;
	return (maped_list);
}
