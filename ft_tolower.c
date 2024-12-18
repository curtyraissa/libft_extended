/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:13:15 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/16 16:15:22 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*
#include <stdio.h>
int main(void)
{
    printf("return test1 = %c\n", ft_tolower('A'));
    printf("return test2 = %c\n", ft_tolower('Z'));
    printf("return test3 = %c\n", ft_tolower('a'));
    printf("return test4 = %c\n", ft_tolower('3'));
    return (0);
}
*/
