/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:26:40 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/18 23:11:13 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *s, int c, size_t length){
    size_t    count;

    if((char *)s != NULL && length > 0){
        count = 0;
        while(count < length){
            ((char *)s)[count] = (unsigned char)c;
            count++;
        }
    }
    return (s);
}

int     main(){
    void *name;
    printf("Before : %s\n", name);
    ft_memset(name, 'v', 10);
    printf("After : %s\n", name);
    return 0;
}
