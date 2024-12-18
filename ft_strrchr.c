/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:25:45 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/25 11:55:09 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence = NULL;

	while (*s)
	{
		if (*s == (unsigned char)c)
			last_occurrence = s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return ((char *)last_occurrence);
}

/*
#include <stdio.h>
int main(void)
{
    const char *str = "Hello, 42!";
    printf("Result: %s\n", ft_strrchr(str, 'l'));
    printf("Result: %s\n", ft_strrchr(str, 'z')); //NULL
    printf("Result: %s\n", ft_strrchr(str, '\0'));
    return (0);
}
*/
