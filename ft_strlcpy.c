#include "stdlib.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	while (src[i] != '/0' && i < size)
	{
		dest[i] = src [i];
		i++;
	}
	dest[size] = '/0';
	return (srclen);
}
