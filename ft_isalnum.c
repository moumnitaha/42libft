/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:40:11 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/08 15:00:40 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_isalnum(int c){
    int     true = 1024;
    int     false = 0;
    unsigned char d = c;

    return ((d >= 48 && d <= 57) || (d >= 97 && d <= 122) || (d >= 65 && d <= 90)) ? true : false;
}

int     main(){
    printf("%d\n", ft_isalnum('7'));
    printf("%d\n", ft_isalnum('K'));
    printf("%d\n", ft_isalnum('@'));
    printf("%d\n", ft_isalnum('\''));
    return 0;
}