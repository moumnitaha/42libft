/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:15:18 by tmoumni           #+#    #+#             */
/*   Updated: 2022/10/13 11:05:34 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int      ft_isalpha(int c){
    int     true = 1024;
    int     false = 0;

    return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90)) ? true : false;
}

int     main(){
    printf("%d\n", ft_isalpha('a'));
    return 0;
}
