/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:24:41 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/16 10:24:18 by tmoumni          ###   ########.fr       */
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

void *ft_memmove(void *dst, const void *src, size_t len){
    char *ndst;
    const char *nsrc;
    size_t count;
    size_t srclen;

    ndst = (char *)dst;
    nsrc = (char *)src;
    srclen = ft_strlen((char *)src);
    count = 0;

    // if(len > srclen || (char *)src == (char *)dst){
    //      while(count < srclen){
    //         ((char *)ndst)[count] = ((char *)nsrc)[count];
    //         count++;
    //     }
    //     ((char *)ndst)[count] = '\0';
    // } else {
    //     while(count < len){
    //         ndst[count] = ((char *)nsrc)[count];
    //         count++;
    //     }
	// ((char *)ndst)[count] = '\0';
    // }

    if(len){
        while(count < len && ndst[count]){
            ndst[count] = ((char *)nsrc)[count];
            count++;
        }
	// ((char *)ndst)[count] = '\0';
    }
    return ((void *)dst);
}

int main(int ac, char **av){
    if(ac == 5)
        return(0);
    char dst[] = "abcdefghijklmnopqrstuvwxyz";
    const char src[] = "1234567890vvvvv";
    ft_putstr(dst);
    ft_memmove(dst, src, atoi(av[1]));
    ft_putstr(dst);
    return(0);
}
