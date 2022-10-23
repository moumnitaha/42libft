/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:23:55 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/23 11:59:11 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	count;

	count = 0;
	while (count < ft_strlen(s))
	{
		f(count, s);
		count++;
	}
}

// void	to_up(unsigned int i, char *n)
// {
// 	if (n[i] >= 97 && n[i] <= 122)
// 	{
// 		n[i] = n[i] - 32;
// 	}
// }

// int	main(void)
// {
// 	char me[] = "Taha Moumni";
// 	printf("%s\n", me);
// 	ft_striteri(me, to_up);
// 	printf("%s\n", me);
// 	return (0);
// }
