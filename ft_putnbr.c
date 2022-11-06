/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvan-wij <fvan-wij@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:28:20 by fvan-wij          #+#    #+#             */
/*   Updated: 2022/11/07 00:07:24 by fvan-wij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	char	convert;
	int		j;

	j = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n < 10)
	{
		convert = '0' + n;
		j += write(1, &convert, 1);
	}
	if (n >= 10)
	{
		j += ft_putnbr(n / 10);
		j += ft_putnbr(n % 10);
	}
	return (j);
}

