#include "libft.h"

char	*ft_strdup(const char* s)
{
	const char	*dup;
	size_t	i;

	i = 0;
	dup = malloc(sizeof(char) * ft_strlen(s));
	if (dup == '\0')
		return (NULL);
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
