#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	last_node;

	while (lst)
	{
		if (lst->next == NULL)
			return (last_node);
		lst = lst->next;
	}
	return (lst);
}
