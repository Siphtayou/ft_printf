/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:12:32 by agilles           #+#    #+#             */
/*   Updated: 2023/11/04 16:08:33 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libftgit/libft.h"

int	ft_printarg(char c, va_list *arg, int len)
{
	if (c == 'c')
		len += ft_putchar((char)va_arg(*arg, int));
/*	else if (c == 's')
		len += ft_put_s();
	else if (c == 'p')
		len += ft_put_p();
	else if (c == 'd' || c == 'i')
		len += ft_put_di();
	else if (c == 'u')
		len += ft_put_u();
	else if (c == 'x')
		len += ft_put_x();
	else if (c == '%')
		len += ft_put_prc();*/
	return (len);
}

int	ft_printna(const char *src, va_list *arg, int len)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] == '%')
		{
			len = ft_printarg(src[i + 1], arg, len);
			i += 2;
		}
		else
		{
			ft_putchar_fd(src[i], 1);
			len++;
			i++;
		}
	}
	return (len);
}

int	ft_printf(const char *src, ...)
{
	va_list	arg;
	int		len;

	len = 0;
	va_start(arg, src);
	len = ft_printna(src, &arg, len);
	va_end(arg);
	return (len);
}
