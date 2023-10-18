/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:37:28 by yowoo             #+#    #+#             */
/*   Updated: 2023/10/18 14:10:19 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>

void			*ft_calloc(unsigned int nitems, unsigned int size);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
unsigned long	ft_strlen(const char *str);
void			*ft_memset(void *str, int c, unsigned int n);
void			ft_bzero(void *str, unsigned int n);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
void			*ft_memmove(void *dest, const void *src, unsigned int n);
unsigned long	ft_strlcpy(char *dst, const char *src, unsigned int n);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *str, int c);
char			*ft_strdup(const char *src);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strrchr(const char *str, int c);
char			*ft_strtrim(char const *s1, char const *set);
int				ft_strncmp(const char *str1, const char* str2, unsigned int n);
void			*ft_memchr(const void *str, int c, unsigned int n);
int				ft_memcmp(const void* str1, const void* str2, unsigned int n);
char			*ft_strnstr(const char *big, const char *little, unsigned int n);
int				ft_atoi(const char *str);
char			*ft_substr(char const *s, unsigned int start, unsigned long len);

#endif  //header guard = line 1, 2 and the last line, it is once-only header