/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:32:02 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/30 14:41:31 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	count;
	size_t	slen;

	if (!s)
		return (NULL);
	count = 0;
	slen = ft_strlen(s);
	if (start <= slen && len <= slen)
		str = (char *)malloc(sizeof(char) * (len + 1));
	else if (start <= slen && len > slen)
		str = (char *)malloc(sizeof(char) * (slen + 1));
	else
		str = (char *)malloc(sizeof(char));
	if (!str)
		return (NULL);
	while (s[count + start] && start < slen && count < len)
	{
		str[count] = s[start + count];
		count++;
	}
	str[count] = '\0';
	return (str);
}
