/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvan-wij <fvan-wij@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:41:49 by fvan-wij          #+#    #+#             */
/*   Updated: 2022/11/07 00:22:47 by fvan-wij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libftprintf.h"
#include <stdio.h>

int    ft_printf(const char *s, ...)
{
    int 	i;
    int		n_of_chars;
	va_list args;
    
    i = 0;
	n_of_chars = 0;
    va_start(args, s);
	
    while (s[i])
    {
        if (s[i] == '%')
		{
			n_of_chars += ft_printspecifier(s[i + 1], args);
			i++;
		}
		else
		{
			write(1, &s[i], 1);
			n_of_chars++;
		}
		i++;	
    }
    va_end(args);
    return (n_of_chars);
}

