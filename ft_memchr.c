#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return (s[i]);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return (s[i]);
	return (NULL);	
}
