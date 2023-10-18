/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:01:37 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/18 14:42:45 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned long len)
{
	char	*substr;
	char	*sub_pt;

	if (start > strlen(s))
		return ("");
	substr = (char *)malloc((len + 1) * sizeof(char));
	if(!substr)
		return (0);
	sub_pt = substr;
    while (start--)
	    s++;

	while(len-- && *s != '\0')
	{
        *sub_pt = *s;
        sub_pt++;
        s++;
	}
	*sub_pt = '\0';
    return (substr);
}

// // printf("result in Fn is\n: %s", substr);
// //substr would be anyway 0 if malloc fails
// int main(){
//     char str[]="lorem ipsum";
//     char* res= ft_substr(str, 2, 5);

//     printf("result is: %s\n", res);

//     // char* strsub;
//     // if (!(strsub = ft_substr(str, 0, 10)))
//     //     printf("%s\n","NULL");
//     // else
//     //     printf("%s\n",strsub);
//     // if (str == strsub)
//     //     printf("%s","\nA new string was not returned");
// }

