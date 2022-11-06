/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvan-wij <fvan-wij@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:21:13 by fvan-wij          #+#    #+#             */
/*   Updated: 2022/11/07 00:14:35 by fvan-wij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(int n)
{
    char hex[30];
    int remainder;
    int i;
    int j;
    
    i = 0;
    j = 0;
    remainder = 0;
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
    j = i - 1;
    while (0 <= j)
    {
        write(1, &hex[j], 1);
        j--;
    }
	return (i);
}

