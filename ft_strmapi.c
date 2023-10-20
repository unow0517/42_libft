/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:56:13 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/20 10:31:44 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	my_toupper(unsigned int i, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		c -= ('a'-'A');
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	i = 0;
	res = (char *)malloc((strlen(s) + 1) * sizeof(char));
	if (!res)
		return (0);
	while (*s)
	{
		*(res + i) = f(i, *s++);
		i++;
	}
	*(res + i) = '\0';
	return (res);
}

// int main(void)
// {
// 	char	*res;
// 	char	*str;

// 	str = "Hello World";
// 	res = ft_strmapi(str, my_toupper);
// 	printf("res: %s", res);
// 	return (0);
// }