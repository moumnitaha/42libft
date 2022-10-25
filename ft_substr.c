/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:32:02 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/25 14:43:28 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	count;
	size_t	slen;

	count = 0;
	slen = ft_strlen((char *)s);
	if (start <= slen)
		str = (char *)malloc(sizeof(char) * ((slen - start) + 1));
	else
		str = (char *)malloc(sizeof(char) * (slen + 1));
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

// int main(){
// 	printf("%s\n", ft_substr("BONJOUR LES HARICOTS !", 8, 14));
// 	return(0);
// }
