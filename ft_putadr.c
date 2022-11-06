/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoadr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvan-wij <fvan-wij@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:04:28 by fvan-wij          #+#    #+#             */
/*   Updated: 2022/11/04 17:04:28 by fvan-wij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int    ft_putadr(unsigned long n)
{
    char hex[30];
    unsigned long remainder;
    unsigned long i;
    unsigned long j;

    i = 0;
	j = 0;
    remainder = 0;
	write(1, "0x", 2);
    while (n != 0)
    {
        remainder = n % 16;
        if (remainder < 10)
            hex[i] = 48 + remainder;
        else if (remainder >= 10)
            hex[i] = 87 + remainder;
        i++;
        n = n / 16;
    }
	j = i;
    while (i != 0)
    {
        write(1, &hex[i - 1], 1);
        i--;
    }
	return (j);
}