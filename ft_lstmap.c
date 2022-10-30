/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:16:42 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/30 14:45:54 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*maped_lst;
	t_list	*new_node;

	maped_lst = NULL;
	if (!lst)
		return (0);
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&maped_lst, del);
			return (0);
		}
		ft_lstadd_back(&maped_lst, new_node);
		lst = lst->next;
	}
	return (maped_lst);
}
