// C program to demonstrate strdup()
#include<stdio.h>
#include<string.h>
#include"libft.h"

char	*ft_strdup(const char *src)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	result = (char *)malloc((strlen(src)+1) * sizeof(char));
	if (!result)
		return (0);
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	j = 0;
	if (src[j] == '\0')
		result[j] = '\0';
	return (result);
}

int main()
{
	char source[] = "";

	// A copy of source is created dynamically
	// and pointer to copy is returned.
	char* target = strdup(source); 
	char* target_1 = ft_strdup(source); 
	printf("target1: %s\n", target);
	printf("target2: %s", target_1);
	return 0;
}
