/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:32:02 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/19 19:41:53 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,
size_t len){
    char    *str;
    size_t  count;

    count = 0;
    str = (char *)malloc(ft_strlen((char *)s) * len);
    if(!str)
        return (NULL);
    while(s[count] && count < len){
        str[count] = s[start + count];
        count++;
    }
    str[count] = '\0';
    return (str);
}

int main() {
    char const *name = "Taha Moumni";
    char *sub;

    sub = ft_substr(name, 11, 15);
    printf("%s\n", sub);
    return(0);
}