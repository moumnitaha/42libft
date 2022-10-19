/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:03:35 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/16 11:18:30 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char *ft_strchr(const char *str, int c){
    while(*str){
        if(*(char *)str == (unsigned char)c) {
            return((char *)str);
        }
        str++;
    }
    return(NULL);
} 

int main(int ac, char **av){
    char name[] = "TahaMoumniTheGeek";
    printf("%s\n", ft_strchr(name, 'M'));
    printf("%s\n", strchr(name, 'M'));
    return(0);
}