/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:26:40 by tmoumni           #+#    #+#             */
/*   Updated: 2022/11/05 14:48:16 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t length)
{
	size_t	count;

	count = 0;
	while (count < length)
	{
		((char *)s)[count] = (unsigned char)c;
		count++;
	}
	return ((void *)s);
}
