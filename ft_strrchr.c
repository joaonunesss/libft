#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;

	slen = ft_strlen(s) - 1;
	while (slen >= 0)
	{
		if (s[slen] == c)
			return (s[slen]);
		slen--;
	}
	if (s[slen + 1] == '\0' && c == '\0')
		return (s[slen + 1]);
	return (NULL);
}
