#include "libft.h"

void	*ft_calloc(size_t nbrelem, size_t elemsize)
{
	void	*mem; //pq void?
	size_t	totalsize;

	totalsize = nbrelem * elemsize;
	mem = (int *) malloc(totalsize);
	if (mem == '\0')
		return (NULL);
	mem = ft_bzero(mem, totalsize);
	return (mem);
}
