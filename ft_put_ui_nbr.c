/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ui_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvan-wij <fvan-wij@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:23:03 by fvan-wij          #+#    #+#             */
/*   Updated: 2022/11/06 23:28:24 by fvan-wij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_put_ui_nbr(unsigned int n)
{
	char	convert;
	int		j;

	j = 0;
	if (n < 10)
	{
		convert = '0' + n;
		write(1, &convert, 1);
		j++;
	}
	if (n >= 10)
	{
		ft_put_ui_nbr(n / 10);
		ft_put_ui_nbr(n % 10);
	}
	return (j);
}
