/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:38:52 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/25 13:58:55 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;
	size_t	i;
	char	*nhaystack;
	char	*nneedle;

	count = 0;
	nhaystack = (char *)haystack;
	nneedle = (char *)needle;
	if (!ft_strlen(nneedle))
		return (nhaystack);
	while (count < len && nhaystack[count])
	{
		i = 0;
		while (nhaystack[count + i] == nneedle[i] && (count + i) < len)
				i++;
		if (needle[i] == '\0')
			return ((char *)haystack + count);
		else
			count++;
	}
	return (NULL);
}

// int main(int ac, char **av){
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
// 	char * empty = (char*)"";
// 	// printf("mine: %s\n",ft_strnstr(empty, "", 0));
// 	// printf("sys : %s\n",strnstr(empty, "", 0));
// 	// printf("----\n");
// 	// printf("mine: %s\n",ft_strnstr(empty, "coucou", -1));
// 	// printf("sys : %s\n",strnstr(empty, "coucou", -1));
// 	// printf("----\n");
// 	printf("mine: %s\n",ft_strnstr(haystack, haystack, atoi(av[1])) );
// 	printf("sys : %s\n",strnstr(haystack, haystack, atoi(av[1])) );
// 	// printf("%s\n", haystack + (ft_strlen(haystack) - 3));
// 	return(0);
// }