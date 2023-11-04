/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:49:14 by agilles           #+#    #+#             */
/*   Updated: 2023/11/04 16:06:28 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftgit/libft.h"
#include "ft_printf.h"

int	main(void)
{
	char	c;
	c = 'c';
	printf("printf %%c: %c\n", c);
	ft_printf("ft_printf %%c: %c\n", c);
	return (1);
}
