/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:49:03 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/25 11:55:44 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	char str[] = "Hello, world!";
	char *result;

	result = ft_memchr(str, 'o', 12);
	if (result)
		printf("Found 'o' at position: %ld\n", result - str);
	else
		printf("'o' not found in the first 12 bytes.\n");
	return (0);
}
*/
