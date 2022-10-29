/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:08:35 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/29 18:33:24 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ((void) NULL);
	tmp = lst->next;
	del(lst->content);
	free(lst);
	lst->next = tmp;
}
