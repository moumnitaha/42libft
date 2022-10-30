/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:12:35 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/30 16:46:32 by tmoumni          ###   ########.fr       */
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
	if (str[count] == '+')
		count++;
	else if (str[count] == '-')
	{
		sign = -1;
		count++;
	}
	while (str[count] && ft_isdigit(str[count]))
	{
		result = result * 10 + (str[count] - '0');
		count++;
	}
	return (sign * result);
}
