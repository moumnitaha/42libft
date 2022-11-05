/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:12:35 by tmoumni           #+#    #+#             */
/*   Updated: 2022/11/05 11:40:50 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	int			count;
	long long	result;

	count = 0;
	sign = 1;
	result = 0;
	while (str[count] && str[count] < 33 && str[count] != 27)
		count++;
	if (str[count] == '+' || str[count] == '-')
		count++;
	if (str[count - 1] == '-')
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
