/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:35:55 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/22 12:42:30 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t length)
{
	size_t	count;

	count = 0;
	if (length > 0 && (char *)s != NULL)
	{
		while (count < length)
		{
			((char *)s)[count] = '\0';
			count++;
		}
	}
}
