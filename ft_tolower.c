/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:24:26 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/10 14:28:03 by tmoumni          ###   ########.fr       */
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
    if(n >= 65 && n <= 90){
        n = n + 32;
    }
    return n;
}

int main(){
    char c = 'M';
    c = ft_toupper(c);
    printf("%c\n", c);
}