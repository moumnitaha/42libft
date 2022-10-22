/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:23:06 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/22 18:59:37 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int c, char **av)
{
	const char	*haystack;
	const char	*needle;
	char		**array;
	size_t		i;

	if (c > 3)
		return (0);
	haystack = "Taha Moumni at 1337";
	i = 0;
	array = ft_split(haystack, av[1][0]);
	while (ft_split(haystack, av[1][0])[i])
	{
		printf("%s\n", ft_split(haystack, av[1][0])[i]);
		i++;
	}
	return (0);
}
