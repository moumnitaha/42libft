/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:10:28 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/10 14:28:40 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <ctype.h>

int  ft_toupper(int c){
     unsigned char n = c;
    if(n >= 97 && n <= 122){
        n = n - 32;
    }
    return n;
}

int main(){
    char c = 'm';
    c = ft_toupper(c);
    printf("%c\n", c);
}