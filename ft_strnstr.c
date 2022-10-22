/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:38:52 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/22 14:45:15 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;
	size_t	haylen;
	char	haystackcpy[len];

	haylen = ft_strlen((char *)haystack);
	count = 0;
	while (count < len && ((char *)haystack)[count])
	{
		haystackcpy[count] = ((char *)haystack)[count];
		count++;
	}
	haystackcpy[count] = '\0';
	count = 0;
	while (count < len)
	{
		if (!ft_strncmp(haystackcpy + count, needle, ft_strlen((char *)needle)))
		{
			return ((char *)haystack + count);
		}
		count++;
	}
	return (NULL);
}
