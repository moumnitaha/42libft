/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:46:17 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/20 08:56:57 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2){
    char *str;
    size_t count;
    size_t s1len;
    size_t s2len;

    s1len = ft_strlen((char *)s1);
    s2len = ft_strlen((char *)s2);
    str = (char *)malloc((s1len + s2len + 1) * sizeof(char));
    count = 0;

    if(!str)
        return(NULL);
    while (count < s1len + s2len)
    {
        if(count < s1len){
            str[count] = s1[count];
        } else {
            str[count] = s2[count - s1len];
        }
        count++;
    }
    str[count] = '\0';
    return(str);
}

int main(){
    const char *s1 = "Taha";
    const char *s2 = " Moumni";
    char *me;
    me = ft_strjoin(s1, s2);
    printf("%s\n", me);
    return(0);
}