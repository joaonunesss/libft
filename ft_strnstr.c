#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (ft_strlen(little) == 0)
		return (big);
	while (big[i] != '\0' && i < len)
	{
		k = 0;
		while (big[i] == little[k])
			j++;
		if (little[k] == '\0')
			return (big);
		i++;
			
	}
	return (NULL);
}
