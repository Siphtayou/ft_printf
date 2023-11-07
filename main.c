/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agilles <agilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:49:14 by agilles           #+#    #+#             */
/*   Updated: 2023/11/07 17:48:04 by agilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


// %c main
/*int	main(void)
{
	char	c;
	char	d;
	int		len;

	c = 'E';
	d = 'Z';
	len = printf("printf %%c: %c%c\n", c, d);
	printf("printf len : %d\n\n", len);
	len = ft_printf("ft_printf %%c: %c%c\n", c, d);
	printf("ft_printf len : %d\n\n", len);
	return (0);
}*/

// %s main
/*int	main(int argc, char **argv)
{
	int	len;

	len = printf("printf %%s : %s\n", argv[1]);
	printf("printf len : %d\n\n", len);
	len =ft_printf("ft_printf %%s : %s\n", argv[1]);
	printf("ft_printf len : %d\n\n", len);
	return (0);
}*/

// %p main
/*int	main(void)
{
	char	*p;
	char	i;
	int	len;

	p = &i;
	i = "test";
	len = printf("printf %%s : %s\n", p);
	printf("printf len : %d\n\n", len);
	/*len = ft_printf("ft_printf %%s : %s\n", argv[1]);
	printf("ft_printf len : %d\n\n", len);
}*/

// %d and %i main
/*int	main(void)
{
	int	n;
	int	nb;
	int len;

	n = 1234;
	nb = 85;
	len = printf("printf %%d / %%i : %d / %i\n", n, nb);
	printf("printf len : %d\n\n", len);
	len = ft_printf("ft_printf %%d / %%i : %d / %i\n", n, nb);
	printf("ft_printf len : %d\n\n", len);
	return (0);
}*/

// %u main
int	main(void)
{
	unsigned int	i;
	int				len;

	i = 86;
	len = printf("printf %%u : %u\n", i);
	printf("printf len : %d\n\n", len);
	len = ft_printf("ft_printf %%u : %u\n", i);
	printf("ft_printf len : %d\n\n", len);
	return (0);
}
