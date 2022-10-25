/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:20:26 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/25 18:51:20 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 1;
	while (*s)
	{
		if (*(s + 1) && *s == c && *(s + 1) != c)
			count++;
		s++;
	}
	return (count);
}

size_t	word_len(char const *s, int c)
{
	size_t	count;

	count = 0;
	while (s[count] && s[count] != c)
		count++;
	return (count);
}

void	*free_mem(char **array, size_t j)
{
	while (array[j - 1])
	{
		free(array[j - 1]);
		j--;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	count;
	size_t	index;
	size_t	i;

	count = 0;
	index = 0;
	i = 0;
	array = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!array)
		return (free_mem(array, index));
	while (index < count_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		array[index] = (char *)malloc((word_len(s + i, c)) * sizeof(char));
		if (!array[index])
			return (free_mem(array, index));
		array[index] = ft_substr(s, i, word_len(s + i, c));
		while (s[i] && s[i] != c)
			i++;
		index++;
	}
	array[index] = NULL;
	return (array);
}

// int main(){
// 	char * * tab = ft_split("  tripouille  42  ", ' ');
// 	int i =0;
// 	int j =0;
// 	while(tab[i])
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// }