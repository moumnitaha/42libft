/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:47:34 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/08 12:06:32 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_isascii(int d){
    int     true = 1024;
    int     false = 0;

    return ((d >= 0 && d <= 127)) ? true : false;
}

int     main(){
    printf("%d\n", ft_isascii('7'));
    printf("%d\n", ft_isascii('K'));
    printf("%d\n", ft_isascii('@'));
    return 0;
}