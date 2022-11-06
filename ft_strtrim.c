/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:02:53 by tmoumni           #+#    #+#             */
/*   Updated: 2022/11/06 17:07:40 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	trim_start(char const *s1, char const *set)
{
	size_t	index;

	index = 0;
	while (ft_strchr(set, s1[index]) && s1[index])
		index++;
	return (index);
}

static size_t	trim_end(char const *s1, char const *set)
{
	size_t	index;

	if (!ft_strlen((char *)s1))
		return (0);
	index = ft_strlen((char *)s1) - 1;
	while (ft_strchr(set, s1[index]) && index)
		index--;
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	count;

	if (!s1 || !set)
		return (NULL);
	start = trim_start(s1, set);
	end = trim_end(s1, set);
	count = 0;
	if (start <= end)
		str = (char *)malloc(((end - start) + 2) * sizeof(char));
	else
		str = (char *)malloc(sizeof(char));
	if (!str)
		return (NULL);
	while (start <= end)
	{
		str[count] = s1[start];
		start++;
		count++;
	}
	str[count] = 0;
	return (str);
}
