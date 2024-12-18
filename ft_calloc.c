/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:47:47 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/21 12:26:44 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			total_size;
	size_t			i;

	total_size = nmemb * size;
	if (nmemb != 0 && total_size / nmemb != size)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/*
#include <stdio.h>
int main(void)
{
    int *arr;
    size_t nmemb = 3;
    arr = (int *)ft_calloc(nmemb, sizeof(int));
    if (!arr)
    {
        printf("Memory allocation failed.\n");
        return (1);
    }
    for (size_t i = 0; i < nmemb; i++)
        printf("%d ", arr[i]);
    free(arr);
    return (0);
}
*/
