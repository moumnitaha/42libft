/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:46:43 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/22 15:01:38 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<stdio.h>
#include	<string.h>
#include	<unistd.h>

#ifndef	LIBFT_H
#define LIBFT_H

size_t	ft_strlen(char *str);
char	*ft_strdup(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_bzero(void *s, size_t length);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_itoa(int n);
char	*ft_strjoin(char const *s1, char const *s2);
char	ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif