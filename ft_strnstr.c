/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 07:53:17 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/19 17:26:56 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, unsigned long n)
{
	char			*bptr;
	char			*lptr;
	char			*start;
	unsigned long	cnt;
	unsigned long	n1 = n;

	if (*little == '\0')
		return ((char *)big);
	if (*big == '\0')
		return (0);
	bptr = (char *)big;
	lptr = (char *)little;
	cnt = 0;
	while (n && *bptr != '\0')
	{
		start = bptr;
		while (*bptr == *lptr && bptr - big + cnt < n1 && *lptr != '\0')
		{
			cnt++;
			bptr++;
			lptr++;
		}
		cnt = 0;
		if (*lptr == '\0')
			return (start);
		n--;
		bptr = start + 1;
		lptr = (char *)little;
	}
	return (0);
}

int main(){
    char big[] = "aaabcabcd";
    char small[] = "abcd";

    int len = 9;
    // char* res = strnstr(big, small, len);
    // printf("strnstr is: %s\n",res);
    char* myRes = ft_strnstr(big, small, len);
    printf("my_strnstr is: %s",myRes);
}
// after null-term. is not taken into account