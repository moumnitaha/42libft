/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:19:46 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/24 10:28:24 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	length;

	if (str == NULL)
	{
		return (0);
	}
	else
	{
		length = 0;
		while (str[length] != '\0')
		{
			length++;
		}
	}
	return (length);
}
