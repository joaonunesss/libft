#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t	i;

	i = 0;
	c1 = s1;
	c2 = s2;
	if (n = 0)
		return (0);
	while (i < n)
        {
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}
