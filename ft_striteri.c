/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:34:45 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/23 09:40:36 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	my_convert(unsigned int i, char *c)
// {
// 	// printf("%s","hello");
// 	printf("*c: %c, i : %d\n",*c, i);
// 	// *c = 'S';
// 	if (*c >= 'a' && *c <= 'z')
// 		*c -= ('a' - 'A');
// 	else if (*c >= 'A' && *c >= 'Z')
// 		*c += ('a' - 'A');
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	// char	*res;
// 	char	*str;

// 	str = "Hello World";
// 	printf("str: %s\n", str);
// 	ft_striteri(str, my_convert);
// 	printf("str_after: %s", str);
// 	// printf("res: %s", "Hello");
// 	return (0);
// }