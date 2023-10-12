/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:38:02 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/09 17:38:07 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
    if(c >= 97 && c<=122){
        c = c - 32;
    }
    return c;
}

// int main () {
//     int i = 0;
//     char c;
//     char str[] = "";
   
//     while(str[i]) {
//         putchar (toupper(str[i]));
//         i++;
//     }
//     putchar('\n');

//     i = 0;
//     while(str[i]) {
//         putchar (ft_toupper(str[i]));
//         i++;
//     }
   
//     return(0);
// }