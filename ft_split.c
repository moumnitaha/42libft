/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:20:26 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/30 19:02:53 by tmoumni          ###   ########.fr       */
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
	size_t	count;
	size_t	index;
	size_t	i;

	if (s == NULL)
		return (NULL);
	index = 0;
	i = 0;
	array = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!array)
		return (0);
	while (index < count_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		array[index] = (char *)malloc((word_len(s + i, c) + 1) * sizeof(char));
		if (!array[index])
			return (free_mem(array));
		count = 0;
		while (s[i] && s[i] != c)
			array[index][count++] = *(s + i++);
		array[index][count] = '\0';
		index++;
	}
	array[index] = NULL;
	return (array);
}
