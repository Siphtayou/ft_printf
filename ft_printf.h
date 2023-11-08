/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:29:06 by agilles           #+#    #+#             */
/*   Updated: 2023/11/08 16:56:39 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include "libft/libft.h"
# include <stdarg.h>

// ft_printf.c function
int	ft_printf(const char *src, ...);
int	ft_printna(const char *src, va_list *arg, int len);
int	ft_printarg(char c, va_list *arg, int len);

// All put function
int	ft_putchar(char c, int len);
int	ft_put_s(char *s, int len);
int	ft_put_di(int nb, int len);
int	ft_put_u(unsigned int nb, int len);
int	ft_put_p(unsigned long long n, int len);
int	ft_put_x(unsigned long long n, int len, char c);

#endif
