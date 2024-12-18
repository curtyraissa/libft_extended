/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:52:32 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/31 11:50:16 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_arg(va_list args, char type)
{
	if (type == 'c')
		return (print_char(va_arg(args, int)));
	if (type == 's')
		return (print_str(va_arg(args, char *)));
	if (type == 'p')
		return (print_pointer(va_arg(args, unsigned long)));
	if (type == 'd' || type == 'i')
		return (print_nbr(va_arg(args, int)));
	if (type == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	if (type == 'x')
		return (print_hex(va_arg(args, unsigned int), 1));
	if (type == 'X')
		return (print_hex(va_arg(args, unsigned int), 0));
	if (type == '%')
		return (print_char('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			len += print_arg(args, format[++i]);
		else
			len += print_char(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
