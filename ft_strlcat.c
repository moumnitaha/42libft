/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:40:04 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/16 10:23:55 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize){
    size_t count;
    size_t dstlen;
    size_t srclen;

    dstlen = ft_strlen(dst);
    srclen = ft_strlen((char *)src);
    count = 0;

    if(dstsize > dstlen){
        while(count < dstsize - dstlen - 1 && src[count]){
            dst[dstlen + count] = src[count];
            count++;
        }
        dst[dstlen + count] = '\0';
    }

    return (dstsize > dstlen) ? (srclen + dstlen) : (srclen + dstsize);
}

int main(int ac, char **av){
    char dst[] = "abcdefghijklmnopqrstuvwxyz";
    const char src[] = "1236547890";
    size_t j;
    write(1, &dst, ft_strlen(dst));
    write(1, "\n", 1);
    j = strlcat(dst, src, atoi(av[1]));
    //j = strlcat(dst, src, atoi(av[1]));
    write(1, &dst, ft_strlen(dst));
    write(1, "\n", 1);
    printf("%lu\n", j);
    return(0);
}
