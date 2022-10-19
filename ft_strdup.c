/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:01:49 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/20 00:36:13 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strdup(const char *s){
    char    *ptr;
    size_t  count;

    count = 0;
    ptr = (char *)malloc((ft_strlen((char *)s) + 1) * sizeof(char));
    if(!ptr){
        return (NULL);
    }
    while (count < ft_strlen((char *)s))
    {
        ptr[count] = s[count];
        count++;
    }
    ptr[count] = '\0';
    return (ptr);
}

// int main(){
//     const char *name = "Taha Moumni";
//     char *cpy;

//     cpy = ft_strdup(name);
//     printf("%s\n", cpy);
//     return(0);
// }