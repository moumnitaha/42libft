/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:53:45 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/16 10:23:48 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize){
    size_t count;

    count = 0;

    // if(dstsize > ft_strlen((char *)dst)){
    //     while (count < ft_strlen((char *)src))
    //     {
    //         dst[count] = src[count];
    //         count++;
    //     }
    //     dst[count] = '\0';

    // } else {
    //     while (count < dstsize - 1)
    //     {
    //         dst[count] = src[count];
    //         count++;
    //     }
    //     dst[count] = '\0';
    // }
    if(dstsize){
        while(count + 1 < dstsize && src[count]){
            dst[count] = src[count];
            count++;
        }
         dst[count] = '\0';
    }
    
    return ft_strlen((char *)src);
}

int main(int ac, char **av){
    char dst[] = "abcdefghijklmnopqrstuvwxyz";
    const char src[] = "1236547890****";
    size_t j;
    j = ft_strlcpy(dst, src, atoi(av[1]));
    write(1, &dst, ft_strlen(dst));
    write(1, "\n", 1);
    printf("%lu\n",j);
    return(0);
}
