/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:47:34 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/21 16:25:50 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
	{
		*ptr++ = '\0';
	}
}

/*
#include <stdio.h>
#include <strings.h>
int main(void)
{
    char buffer[10] = "Hello";
    bzero(buffer, 5);
    for (int i = 0; i < 10; i++)
    {
        if (buffer[i] == '\0')
            printf("\\0 ");
        else
            printf("%c ", buffer[i]);
    }
	printf("\n");
    return (0);
}
*/
