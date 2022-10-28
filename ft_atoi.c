/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:12:35 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/28 15:58:29 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getresult(long int result, int sign)
{
	if (result < 0 && sign > 0)
		return (-1);
	else if (result < 0 && sign < 0)
		return (0);
	return (result);
}

int	ft_atoi(const char *str)
{
	int			sign;
	int			count;
	long int	result;

	count = 0;
	sign = 1;
	result = 0;
	while (str[count] < 33 && str[count] != 27)
		count++;
	if (str[count] == '+')
		count++;
	else if (str[count] == '-')
	{
		sign = -1;
		count++;
	}
	while (str[count++] && ft_isdigit(str[count - 1]))
	{
		result *= 10;
		result += str[count - 1] - '0';
		result = getresult(result, sign);
	}
	return (sign * result);
}
