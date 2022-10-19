/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:33:03 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/16 11:30:21 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char *ft_strrchr(const char *str, int c){
    size_t count;

    count = ft_strlen((char *)str);
    
    while (count){
        if(str[count] == (char)c){
            return (char *)str + count;
        }
        count--;
    }
    return(NULL);
}

int main(int ac, char **av){
    char name[] = "tahaMoumni TheGeek";
    printf("%s\n", ft_strrchr(name, '\0'));
    printf("%s\n", strrchr(name, '\0'));
    return(0);
}