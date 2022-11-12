/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:41:04 by tmoumni           #+#    #+#             */
/*   Updated: 2022/11/12 13:39:31 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*ndst;
	const char	*nsrc;

	if (dst == src)
		return (0);
	ndst = (char *)dst;
	nsrc = (const char *)src;
	while (n)
	{
		ndst[n - 1] = nsrc[n - 1];
		n--;
	}
	return (dst);
}
