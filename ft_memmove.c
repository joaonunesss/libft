/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:43:06 by jmarinho          #+#    #+#             */
/*   Updated: 2023/04/18 18:11:21 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*temp;
	const char		*s;
	size_t			i;

	i = 0;
	d = dest;
	s = src;
	temp = malloc(sizeof(char) * n);
	if (temp == NULL)
		return (NULL);
	while (i < n)
	{
		temp[i] = s[i];
		d[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}
