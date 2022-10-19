/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:28:52 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/16 12:06:37 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n){
    size_t count; 

    count = 0;

    while (count < n){
        if(s1[count] > s2[count]){
            return(1);
        } else if(s1[count] < s2[count]){
            return(-1);
        }
        count++;
    }
    return(0);
}

// int main(){
//     char name[] = "taHaMoumniTheGeek";
//     char str[] = "tahmni";
//     printf("%d\n", strncmp(name, str, 3));
//     printf("%d\n", ft_strncmp(name, str, 3));
//     return(0);
// }