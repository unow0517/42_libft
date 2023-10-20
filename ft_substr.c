/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:01:37 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/18 19:44:51 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	o_memsize(char const *s, unsigned int start, unsigned long len)
{
	unsigned int	res;
	unsigned int	len_s;

	len_s = strlen(s);
	if (start < len_s - len)
		res = len;
	if (start >= len_s - len)
		res = 0;
	if (start >= len_s)
		res = 0;
	if (*s == '\0' || len == 0)
		res = 0;
	return (res);
}

//len = 10, start = 10, len_s = 5
char	*ft_substr(char const *s, unsigned int start, unsigned long len)
{
	char	*substr;
	char	*sub_pt;
	int		memsize;

	memsize = o_memsize(s, start, len);
	substr = (char *)malloc((memsize + 1) * sizeof(char));
	if (!substr)
		return ("");
	sub_pt = substr;
	while (start--)
		s++;

	while (len-- && *s != '\0')
	{
		*sub_pt = *s;
		sub_pt++;
		s++;
	}
	*sub_pt = '\0';

	return (substr);
}

// printf("result in Fn is\n: %s", substr);
// substr would be anyway 0 if malloc fails
int main(){
    char str[]="";
    char* res= ft_substr(str, 0, 0);

    printf("result is: %s\n", res);

    // char* strsub;
    // if (!(strsub = ft_substr(str, 0, 10)))
    //     printf("%s\n","NULL");
    // else
    //     printf("%s\n",strsub);
    // if (str == strsub)
    //     printf("%s","\nA new string was not returned");
}

