/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:15:09 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/18 20:32:32 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int     ft_isprint(int d){
    int     true = 1024;
    int     false = 0;

    return (d >= 32) ? true : false;
}

int     main(){
    printf("%d\n", ft_isprint('7'));
    printf("%d\n", isprint('7'));
    printf("%d\n", ft_isprint(' '));
    printf("%d\n", isprint(' '));
    printf("%d\n", ft_isprint('\n'));
    printf("%d\n", isprint('\n'));
    return(0);
}