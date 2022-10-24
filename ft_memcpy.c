/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:41:04 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/24 18:50:18 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	count;
	size_t	srclen;

	if (!src || !dst)
		return (NULL);
	srclen = ft_strlen((char *)src);
	count = 0;
	while (count < n && ((char *)dst)[count])
	{
		((char *)dst)[count] = ((char *)src)[count];
		count++;
	}
	if (n > srclen)
		((char *)dst)[count] = '\0';
	return (dst);
}
