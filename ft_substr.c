/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:01:37 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/11 13:40:21 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char* ft_substr(char const *s, unsigned int start, size_t len){
    char* substr = (char*)malloc(len*sizeof(char));
    
    while(start--){
        s++;
    }
    char* sub_pt = substr;
    while(len-- && *s != '\0'){
        *sub_pt = *s;
        sub_pt++;
        s++;
    }

    return substr;
}

//substr would be anyway 0 if malloc fails
int main(){
    char str[]="HelloWorldMorning";
    char* res= ft_substr(str, 5, 50);

    printf("result is: %s", res);
}
