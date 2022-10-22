/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:52:54 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/22 12:39:48 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_num(char *nbr, int n, int div, int count)
{
	int			index;

	index = 0;
	if (n < 0)
	{
		nbr[0] = '-';
		n *= -1;
		index++;
		count++;
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

char	*ft_itoa(int n)
{
	char		*nbr;
	int			count;
	int			div;

	div = 1;
	count = 1;
	while ((n / div >= 10) || (n / div <= -10))
	{
		div *= 10;
		count++;
	}
	nbr = (char *)malloc((count + 2) * sizeof(char));
	if (!nbr)
		return (NULL);
	nbr = get_num(nbr, n, div, count);
	return (nbr);
}
