/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:52:54 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/29 18:32:05 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_num(char *nbr, long long n, int div, int count)
{
	int	index;

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
	long long	nb;

	count = 1;
	div = 1;
	nb = (long long)n;
	while ((nb / div >= 10) || (nb / div <= -10))
	{
		div *= 10;
		count++;
	}
	nbr = (char *)malloc((count + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	nbr = get_num(nbr, nb, div, count);
	return (nbr);
}
