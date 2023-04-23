#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (*lst)
	{
		if (lst->next == NULL)
			lst->next = new;
		lst = lst->next;
	}
}
