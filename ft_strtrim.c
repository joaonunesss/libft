/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:16:51 by jmarinho          #+#    #+#             */
/*   Updated: 2023/04/18 16:57:41 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t		k;
	size_t		i;

	i = 0;
	k = 0;
	trim = malloc(sizeof(char) * ft_strlen(s1));
	if (trim == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (s1[i] != set)
			trim[k] = s1[i];
		else
			trim[k] = s1[i + 1];
		i++;
		k++;
	}
	return (trim);
}
