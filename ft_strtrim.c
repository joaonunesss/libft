/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:16:51 by jmarinho          #+#    #+#             */
/*   Updated: 2023/04/19 15:50:48 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strtrim_beginning(char const *s1, char const *set)
{
	char	*trim;
	size_t	j;
	size_t	i;

	while (s1[i] != '\0')
        {
               	j = 0;
                while (set[j] != '\0')
                {
                        if (s1[i] != set[j])
                        {
                                trim[k] = s1[i];
                                k++;
                        }
                        j++;
                }
                i++;
        }
	return (trim);
}

char    *ft_strtrim_end(char const *trim, char const *set, size_t len_trim)
{
	char *t;

	t = trim;
	while (t[len_trim] == set)
		len_trim--;
	t[len_trim + 1] = '\0';
	return (trim);
}


char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trimb;
	char		*trime;
	size_t		k;
	size_t		i;
	size_t		j;
	size_t		str_len;

	i = 0;
	k = 0;
	str_len = ft_strlen(s1);
	trim = malloc(sizeof(char) * ft_strlen(s1));
	if (trim == NULL)
		return (NULL);
	trim = ft_strtrim_beginning(s1, set);
	len_trim = ft_strlen(trim);
	trim = ft_strtrim_end(trim, set, len_trim);
	return (trim);
}
