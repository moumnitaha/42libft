/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:52:54 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/22 10:37:28 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*nbr;
	size_t		count;
	size_t		index;
	size_t		div;
	size_t		sign;

	div = 1;
	count = 1;
	index = 0;
	if (n < 0)
	{
		sign = -1;
		n *= sign;
		count++;
	}
	while (n / div >= 10)
	{
		div *= 10;
		count++;
	}
	nbr = (char *)malloc((count + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	if (sign == -1)
	{
		nbr[index] = '-';
		index++;
	}
	while (index < count)
	{
		nbr[index] = (n / div) + '0';
		n = n % div;
		div = div / 10;
		index++;
	}
	nbr[index] = '\0';
	return (nbr);
}