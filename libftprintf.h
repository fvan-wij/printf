/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvan-wij <fvan-wij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:46:37 by fvan-wij          #+#    #+#             */
/*   Updated: 2022/11/03 18:44:28 by fvan-wij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <strings.h>
# include <unistd.h>
# include <stdarg.h>

size_t	ft_strlen(const char *s);
int     ft_printf(const char *s, ...);
void	ft_putnbr_fd(int n, int fd);
int     ft_isdecimal(char *s, int i);
int	    ft_ischar(char *s, int i);
void	ft_putchar_fd(char c, int fd);
int	    ft_isprint(int c);
int     ft_iswhitespace(int c);
int     ft_isui(char *s, int i);
void	ft_put_ui_nbr_fd(unsigned int n, int fd);

#endif
