/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:38:19 by agilles           #+#    #+#             */
/*   Updated: 2023/11/07 17:44:56 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static unsigned int	ft_countdigit(unsigned int nb, int len)
{
	while (nb > 9)
	{
		nb /= 10;
		len++;
	}
	len++;
	return (len);
}

static void	ft_put_u_nbr(unsigned int n)
{
	if (n > 9)
		ft_put_u_nbr(n / 10);
	if (n != -2147483648)
	{
		n = n % 10 + '0';
		write(1, &n, 1);
	}
}

int	ft_put_u(unsigned int nb, int len)
{
	len = ft_countdigit(nb, len);
	ft_put_u_nbr(nb);
	return (len);

}
