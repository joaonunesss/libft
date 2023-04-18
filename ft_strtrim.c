#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*trim;
	size_t	k;
	size_t	i;

	i = 0;
	k = 0;
	trim = malloc(sizeof(char) * ft_strlen(s1));
	if (trim = '\0')
		return (NULL);
	while (s1[i] != '\0')
	{
		if (s1[i] != set) //CORRIGIR mais do que um caractere
			trim[k] = s1[i];
		else
			trim[k] = s1[i + 1];
		i++;
		k++;
	}
	return (trim);
}
