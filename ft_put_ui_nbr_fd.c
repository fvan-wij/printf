/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ui_nbr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvan-wij <fvan-wij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:23:03 by fvan-wij          #+#    #+#             */
/*   Updated: 2022/11/03 17:23:27 by fvan-wij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_put_ui_nbr_fd(unsigned int n, int fd)
{
	char	convert;

	if (n < 10)
	{
		convert = '0' + n;
		write(fd, &convert, 1);
	}
	if (n >= 10)
	{
		ft_put_ui_nbr_fd(n / 10, fd);
		ft_put_ui_nbr_fd(n % 10, fd);
	}
}
