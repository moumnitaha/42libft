/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:35:55 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/18 23:03:14 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_bzero(void *s, size_t length){

    size_t  count;

    if(length > 0 && (char *)s != NULL){
        count = 0;
        while(count < length){
            ((char *)s)[count] = '\0';
            count++;
        }
    }
}

// int main(){
//     void *name;
//     printf("Before : %s\n", name);
//     ft_bzero(name, 10);
//     printf("After : %s\n", name);
//     return 0;
// }