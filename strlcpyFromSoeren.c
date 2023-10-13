// size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
//     size_t  n;
//     n = 0;
//     if (dstsize == 0)
//         return (ft_strlen(src));
//     while (src[n] != '\0' && n < dstsize - 1)
//     {
//         dst[n] = src[n];
//         n++;
//     }
//     dst[n] = '\0';
//     while (n < ft_strlen(src))
//         n++;
//     return (n);
// }
