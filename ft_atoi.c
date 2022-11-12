/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:12:35 by tmoumni           #+#    #+#             */
/*   Updated: 2022/11/12 10:34:59 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		count;
	long	result;

	count = 0;
	sign = 1;
	result = 0;
	while (str[count] && ft_iswhitespace(str[count]))
		count++;
	if (str[count] == '+' || str[count] == '-')
		count++;
	if (count > 0 && str[count - 1] == '-')
		sign = -1;
	while (str[count] && ft_isdigit(str[count]))
	{
		result = result * 10 + (str[count] - '0');
		if (result < 0 && result != LONG_MIN)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		count++;
	}
	return (sign * result);
}
