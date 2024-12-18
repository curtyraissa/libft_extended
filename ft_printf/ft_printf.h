/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:52:08 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/31 12:16:27 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	print_char(char c);
int	print_str(char *str);
int	print_nbr(int nbr);
int	print_unsigned(unsigned int nbr);
int	print_hex(unsigned int num, int lowercase);
int	print_pointer(unsigned long ptr);
int	print_address(unsigned long addr);

#endif
