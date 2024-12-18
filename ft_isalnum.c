/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:50:29 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/16 15:27:33 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
int main(void)
{
    printf("return test1 = %d\n", ft_isalnum('a'));
    printf("return test2 = %d\n", ft_isalnum('9'));
    printf("return test3 = %d\n", ft_isalnum('@'));
    return (0);
}
*/
