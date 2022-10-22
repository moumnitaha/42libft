/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:41:04 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/22 13:14:59 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	count;
	size_t	srclen;

	srclen = ft_strlen((char *)src);
	count = 0;
	if (n > srclen || (char *)src == (char *)dst)
	{
		while (count < srclen)
		{
			((char *)dst)[count] = ((char *)src)[count];
			count++;
		}
		((char *)dst)[count] = '\0';
	}
	else
	{
		while (count < n)
		{
			((char *)dst)[count] = ((char *)src)[count];
			count++;
		}
	}
	return (dst);
}
