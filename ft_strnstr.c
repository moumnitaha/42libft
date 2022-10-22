/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:38:52 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/22 15:11:37 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;

	count = 0;
	while (count < len)
	{
		if (!ft_strncmp(haystack + count, needle, ft_strlen((char *)needle)))
		{
			return ((char *)haystack + count);
		}
		count++;
	}
	return (NULL);
}
