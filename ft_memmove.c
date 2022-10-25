/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:24:41 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/25 10:52:28 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		count;

	if (!dst || ! src)
		return (NULL);
	count = 0;
	if (src > dst)
	{
		while (count < len)
		{
			((char *)dst)[count] = ((const char *)src)[count];
			count++;
		}
	}
	else
	{
		while (len)
		{
			((char *)dst)[len - 1] = ((const char *)src)[len - 1];
			len--;
		}
	}
	return ((void *)dst);
}
