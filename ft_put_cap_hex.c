/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcaphex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvan-wij <fvan-wij@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 22:58:31 by fvan-wij          #+#    #+#             */
/*   Updated: 2022/11/06 22:58:31 by fvan-wij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	convert_cap_hex(char *hex, int n)
{
	int	remainder;
	int	i;

	remainder = 0;
	i = 0;
	while (n != 0)
	{
		remainder = n % 16;
		if (remainder < 10)
			hex[i] = 48 + remainder;
		else if (remainder >= 10)
			hex[i] = 55 + remainder;
		i++;
		n = n / 16;
	}
	return (i);
}

int	ft_put_cap_hex(int n)
{
	char	hex[30];
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!n)
	{
		i += write(1, "0", 1);
		return (i);
	}
	i += convert_cap_hex(hex, n);
	j += i - 1;
	while (0 <= j)
	{
		write(1, &hex[j], 1);
		j--;
	}
	return (i);
}
