/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:24:26 by tmoumni           #+#    #+#             */
/*   Updated: 2022/11/12 10:26:27 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	n;

	if (c == EOF)
		return (-1);
	n = (unsigned char)c;
	if (n >= 65 && n <= 90)
		n = n + 32;
	return (n);
}
