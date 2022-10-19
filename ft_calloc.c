/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:49:29 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/18 23:55:01 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;

    ptr = malloc(nmemb * size);
    if(!ptr)
        return (NULL);
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}

int main(){
    char *name;
    printf("B: %ld\n", sizeof(name));
    name = (char *)calloc(5, sizeof(char));
    printf("A: %ld\n", ft_strlen(name));
    return(0);
}