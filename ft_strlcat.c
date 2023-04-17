#include "libft.c"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	totallen;
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	totallen = srclen + destlen;
	i = 0;
	while (src[i] != '\0')
	{
		dest[destlen] = src[i];
		i++;
		destlen++;
	}
	dest[totallen] = '\0';
	return (totallen);
}
