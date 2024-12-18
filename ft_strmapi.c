/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:43:14 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/22 17:15:27 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>
char	to_upper(unsigned int i, char c)
{
	(void)i; 
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
int	main(void)
{
	char	*str = "abcdef";
	char	*result;

	result = ft_strmapi(str, to_upper);
	if (result)
	{
		printf("Resultado: %s\n", result);
		free(result);
	}
	return (0);
}
*/
