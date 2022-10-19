/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:25:42 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/08 11:33:02 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_isdigit(int d){
    int     true = 1024;
    int     false = 0;

    return (d >= 48 && d <= 57) ? true : false;
}

int     main(){
    printf("%d\n", ft_isdigit('7'));
    return 0;
}