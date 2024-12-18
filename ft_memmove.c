/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:49:47 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/25 15:18:49 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	return (dst);
}

/*
#include <stdio.h>
int main(void)
{
    char src[] = "Hello, world!";
    char dst[20];

    // Copiar sem sobreposição
    ft_memmove(dst, src, 13);
    printf("Destination after memmove (no overlap): %s\n", dst);
    // Copiar com sobreposição
    ft_memmove(src + 6, src, 6);
    printf("Source after memmove (with overlap): %s\n", src);
    return (0);
}
*/
