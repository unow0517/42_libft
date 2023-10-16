#ifndef LIBFT_H //ifndef : if not defined,
#define LIBFT_H 

int ft_isalpha();
int ft_isdigit();
int ft_isalnum();
int ft_isascii();
int ft_isprint();
// unsigned long ft_strlen(const char* str);
unsigned long ft_strlen();
void* ft_memset();
void ft_bzero();
void* ft_memcpy();
void* ft_memmove();
// unsigned long ft_strlcpy();
unsigned long ft_strlcpy(char *dst, const char* src, unsigned int n);
unsigned int ft_strlcat();
int ft_toupper();
int ft_tolower();
char* ft_strchr();
char* ft_strrchr();
int ft_strncmp();
void* ft_memchr();
int ft_memcmp();
char* ft_strnstr();
int ft_atoi();

#endif  //header guard = line 1, 2 and the last line, it is once-only header