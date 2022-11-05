/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:20:26 by tmoumni           #+#    #+#             */
/*   Updated: 2022/11/05 17:31:09 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *(s + 1))
			s++;
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

static size_t	word_len(char const *s, int c)
{
	size_t	count;

	count = 0;
	while (s[count] && s[count] != c)
		count++;
	return (count);
}

static void	*free_mem(char **array)
{
	size_t	j;

	j = 0;
	while (array[j])
	{
		free(array[j]);
		j++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	index;
	size_t	count;
	size_t	i;

	index = 0;
	i = 0;
	array = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (index++ < count_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		array[index - 1] = (char *)malloc((word_len(s + i, c) + 1));
		if (!array[index - 1])
			return (free_mem(array));
		count = 0;
		while (s[i] && s[i] != c)
			array[index - 1][count++] = s[i++];
		array[index - 1][count] = '\0';
	}
	array[index - 1] = NULL;
	return (array);
}
