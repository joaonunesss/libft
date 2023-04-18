/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:14:43 by jmarinho          #+#    #+#             */
/*   Updated: 2023/04/18 16:04:08 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*str;

	i = 0;
	str = (char *) s;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (str);
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		return (str);
	return (NULL);
}
