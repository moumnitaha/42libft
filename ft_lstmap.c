/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:16:42 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/29 19:01:17 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*maped_list;
	t_list	*new_node;

	maped_list = malloc((ft_lstsize(lst) + 1) * sizeof(t_list));
	if (!maped_list)
		return (NULL);
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&maped_list, del);
			return (0);
		}
		ft_lstadd_front(&maped_list, new_node);
		lst = lst->next;
	}
	return (maped_list);
}
