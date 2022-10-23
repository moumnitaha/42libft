/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:09:30 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/23 13:03:34 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}

int	main(void)
{
	char c = 'a';
	int sh;
	printf("fd: %d\n", sh);
	ft_putchar_fd(c, sh);
	printf("fd: %d\n", sh);
	return (0);
}
