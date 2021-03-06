/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iomayr <iomayr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:39:41 by iomayr            #+#    #+#             */
/*   Updated: 2022/03/29 17:01:11 by iomayr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putnbr_u(unsigned int h);
int		ft_putnbr(int h);
int		ft_ppvoid(unsigned long int n);
int		ft_Hexaadicimal(unsigned int n);
int		ft_hexadicimal(unsigned int c);
int		ft_printf(const char *s, ...);
int		ft_find(va_list ptr, char c);
#endif
