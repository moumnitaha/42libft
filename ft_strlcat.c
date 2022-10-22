/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:40:04 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/22 14:13:25 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	count = 0;
	if (dstsize > dstlen)
	{
		while (count < dstsize - dstlen - 1 && src[count])
		{
			dst[dstlen + count] = src[count];
			count++;
		}
		dst[dstlen + count] = '\0';
	}
	if (dstsize > dstlen)
		return (srclen + dstlen);
	return (srclen + dstsize);
}
