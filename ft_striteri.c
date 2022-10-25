/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:23:55 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/25 17:08:51 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	count;

	count = 0;
	while (*s)
	{
		f(count, s);
		count++;
		s++;
	}
}

// void iter(unsigned int i, char * s) {
// 	*s += i;
// }

// int	main(void)
// {
// 	char s[] = "0000000000";
// 	ft_striteri(s, iter);
// 	// !strcmp(s, "0123456789");
// 	printf("%s\n", s);
// }
