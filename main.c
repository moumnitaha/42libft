/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:23:06 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/22 15:12:21 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int c, char **av)
{
	const char *haystack;
	const char *needle;
	if (c > 3)
		return (0);

	haystack = "TahaMoumniThe geek";
	needle = "Th";
	printf("%s\n", strnstr(haystack, av[2], atoi(av[1])));
	printf("%s\n", ft_strnstr(haystack, av[2], atoi(av[1])));
	return (0);
}
