/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvan-wij <fvan-wij@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:41:49 by fvan-wij          #+#    #+#             */
/*   Updated: 2022/11/06 23:34:06 by fvan-wij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libftprintf.h"
#include <stdio.h>

int    ft_printf(const char *s, ...)
{
    int 	i;
    int		n;
	va_list args;
    
    i = 0;
	n = 0;
    va_start(args, s);
	
    while (s[i])
    {
        if (s[i] == '%')
		{
			n += ft_printspecifier(s[i + 1], args);
			i++;
		}
		else
		{
			write(1, &s[i], 1);
			n++;
		}
		i++;	
    }
    va_end(args);
    return (n);
}

