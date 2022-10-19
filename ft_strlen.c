/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:19:46 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/09 17:28:12 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t     ft_strlen(char *str){
    size_t     length;

    if(str == NULL){
        return(0);
    } else {
        length = 0;
        while(str[length] != '\0'){
            length++;
        }
    }

    return length;
}
