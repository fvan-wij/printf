/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printspecifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvan-wij <fvan-wij@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:07:11 by fvan-wij          #+#    #+#             */
/*   Updated: 2022/11/06 18:07:11 by fvan-wij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printspecifier(int specifier, va_list args)
{
	int	n;

	n = 0;
	if (specifier == 'd' || specifier == 'i')
		n += ft_putnbr(va_arg(args, int));
	else if (specifier == 'c')
		n += ft_putchar(va_arg(args, int));
	else if (specifier == 'u')
		n += ft_put_ui_nbr((unsigned int)va_arg(args, int));
	else if (specifier == 's')
		n += ft_putstr(va_arg(args, char *));
	else if (specifier == 'p')
		n += ft_putadr(va_arg(args, unsigned long));
	else if (specifier == 'x')
		n += ft_puthex((unsigned int)va_arg(args, int));
	else if (specifier == 'X')
		n += ft_put_cap_hex(va_arg(args, int));
	else if (specifier == '%')
		n += write(1, "%", 1);
	else if (specifier == '\0')
		return (n);
	// if (n == -1)
	// 	return (-1); //Evaluate if this is correct behaviour
	return (n);
}
