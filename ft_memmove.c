/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:24:41 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/22 13:16:28 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ndst;
	const char	*nsrc;
	size_t		count;
	size_t		srclen;

	ndst = (char *)dst;
	nsrc = (char *)src;
	srclen = ft_strlen((char *)src);
	count = 0;
	if (len)
	{
		while (count < len && ndst[count])
		{
			ndst[count] = ((char *)nsrc)[count];
			count++;
		}
	}
	return ((void *)dst);
}
