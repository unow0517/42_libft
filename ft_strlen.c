/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:20:56 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/09 11:20:57 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlen(const char* str)
{
    unsigned int len = 0;
    while(*str != '\0'){
        len++;
        str++;
    }
    return len;
}

// #include <stdio.h>
// int main(){
//     char str[] = "";
//     unsigned int len = ft_strlen(str);
//     printf("%u", len);
// }