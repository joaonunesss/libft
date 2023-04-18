#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const	*sub;

	sub = malloc(sizeof(char) * len);
	if (sub = '\0')
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
