/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:52:54 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/20 10:31:03 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memchr(const void *s, int c, size_t n){
    while(*(char *)s && n){
        if(*(char *)s == (unsigned char)c) {
            return((void *)s);
        }
        s++;
        n--;
    }
    return(NULL);
}

// int main(int ac, char **av){
//     char name[] = "TahaMoumniTheGeek";
//     printf("%s\n", (char *)memchr(name, 'k', atoi(av[1])));
//     printf("%s\n", (char *)ft_memchr(name, 'k', atoi(av[1])));   
//     return(0);
// }