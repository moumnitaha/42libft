/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:02:53 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/20 10:40:59 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t trimStart(char const *s1, char const *set){
    size_t index;

    index = 0;
    while(ft_memchr(set, s1[index], ft_strlen((char *)set)) && s1[index]){
        index++;
    }
    return(index);
}

size_t trimEnd(char const *s1, char const *set){
    size_t index;

    index = ft_strlen((char *)s1) - 1;
    while(ft_memchr(set, s1[index], ft_strlen((char *)set)) && s1[index]){
        index--;
    }
    return(index);
}

char *ft_strtrim(char const *s1, char const *set){
    char *str;
    size_t start;
    size_t end;
    size_t count;

    if(!s1 || !set)
        return(NULL);

    start = trimStart(s1, set);
    end = trimEnd(s1, set);
    count = 0;

    if(start == ft_strlen((char *)s1))
        return("");
    str = (char *)malloc(((end - start + 1) + 1) * sizeof(char));
    if(!str)
        return(NULL);
    while(start <= end){
        str[count] = s1[start];
        start++;
        count++;
    }
    str[count] = 0;
    return (str);
}

int main(){
    char const *name = "Taha";
    char const set[] = {'a','T','h'};
    printf("%s\n", ft_strtrim(name, set));
    return(0);
}