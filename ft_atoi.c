/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:12:35 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/24 11:20:30 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		count;
	int		result;

	count = 0;
	sign = 1;
	result = 0;
	while (str[count] < '!')
		count++;
	if (str[count] == '+')
		count++;
	else if (str[count] == '-')
	{
		sign = -1;
		count++;
	}
	if (str[count] && (str[count] < '0' || str[count] > '9'))
		return (0);
	while (str[count] && (str[count] >= '0' && str[count] <= '9'))
	{
		result *= 10;
		result += str[count] - '0';
		count++;
	}
	return (sign * result);
}
