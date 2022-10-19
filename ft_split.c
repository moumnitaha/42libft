/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:20:26 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/20 00:34:09 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t countWords(char const *s, char c){
    size_t count;
    size_t i;

    count = 1;
    i = 0;
    while(s[i]){
        if (s[i] == c)
            count++;
        i++;
    }
    return (count);
}

size_t wordLen(char const *s, int c){
    size_t count;

    count = 0;
    while (s[count] && s[count] != c)
        count++;
    return (count);
}

void *freeMem(char **array, size_t j){
    while(array[j - 1]){
        free(array[j - 1]);
        j--;
    }
    free(array);
    return (NULL);
}

char **ft_split(char const *s, char c){
    char **array;
    size_t count;
    size_t index;
    size_t words;
    size_t i;
    
    words = countWords(s, c);
    count = 0;
    index = 0;
    i = 0;
    array = (char **)malloc((words + 1) * sizeof(char*));
    if(!array)
        return (NULL);
    while(index < words) {
        array[index] = (char *)malloc((wordLen(s + i, c) + 1) * sizeof(char));
        if(!array[index])
            return (freeMem(array, index));
        while(s[i] && s[i] != c){
            array[index][count] = s[i];
            count++;
            i++;
        }
        i++;
        array[index][count] = '\0';
        count = 0;
        index++;
    }
    return(array);
}

int main(int ac , char **av){
    char const *name = "Taha Moumni iam a geek at worka";
    char **split;
    split = ft_split(name, av[1][0]);
    for (size_t i = 0; i < countWords(name, av[1][0]); i++)
    {
        printf("'%s', ", split[i]);
    }
    
    return(0);
}