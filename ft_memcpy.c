/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarinho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:41:13 by jmarinho          #+#    #+#             */
/*   Updated: 2023/04/14 13:24:36 by jmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned const char		*s;
	size_t				i;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	unsigned char	*ptr;
	char	s1[] = "escola42";
	char	s2[] = "PortoPorto";
	size_t	k = 7;

	ptr = memcpy(s2, s1, k);
	printf("%s\n", ptr);
	ptr = ft_memcpy(s2, s1, k);
	printf("%s\n", ptr);
}*/
