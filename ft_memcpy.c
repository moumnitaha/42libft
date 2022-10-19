/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tahadev <tahadev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:41:04 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/10 23:01:13 by tahadev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

void ft_putstr(char *str){
    int i;
    i=0;
    while(str[i] != '\0'){
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

void *ft_memcpy(void *dst, const void *src, size_t n){
    size_t count;
    size_t srclen;

    srclen = ft_strlen((char *)src);
    printf("%lu\n", srclen);
    count = 0;
    
    if(n > srclen || (char *)src == (char *)dst){
        while(count < srclen){
            ((char *)dst)[count] = ((char *)src)[count];
            count++;
        }
        ((char *)dst)[count] = '\0';
        // dst = (void *)src;
    } else {
        while(count < n){
            ((char *)dst)[count] = ((char *)src)[count];
            count++;
        }
    }
    return (dst);
}

int main(int ac, char **av){
    char dst[26] = "abcdefghijklmnopqrstuvwxyz";
    const char src[12] = "1234567890";
    ft_putstr(dst);
    ft_memcpy(dst, src, atoi(av[1]));
    ft_putstr(dst);
    return(0);
}