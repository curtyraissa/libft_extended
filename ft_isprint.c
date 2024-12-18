/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:04:46 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/16 16:07:22 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
    printf("return test1 = %d\n", ft_isprint(32));
    printf("return test2 = %d\n", ft_isprint(126));
    printf("return test3 = %d\n", ft_isprint(31));
    printf("return test4 = %d\n", ft_isprint(127));
    return (0);
}
*/
