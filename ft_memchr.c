/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:52:54 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/16 11:14:35 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n){
    size_t count;

    count = 0;
    while(*(char *)s && count < n){
        if(*(char *)s == (unsigned char)c) {
            return((void *)s);
        }
        s++;
        count++;
    }
    return(NULL);
}

int main(int ac, char **av){
    char name[] = "TahaMoumniTheGeek";
    printf("%s\n", ft_memchr(name, 'h', 10));    
    printf("%s\n", memchr(name, 'h', 10));
    return(0);
}