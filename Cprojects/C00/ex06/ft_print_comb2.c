/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:41:23 by mchaduc           #+#    #+#             */
/*   Updated: 2023/06/11 01:18:04 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_numbers(int a, int b, int c, int d)
{
	d = b % 10;
	c = a % 10;
	a = a / 10;
	b = b / 10;
	d = d + '0';
	c = c + '0';
	a = a + '0';
	b = b + '0';
	ft_putchar(a);
	ft_putchar(c);
	ft_putchar(' ');
	ft_putchar(b);
	ft_putchar(d);
	a = a - '0';
	b = b - '0';
	c = c - '0';
	d = d - '0';
	if (a != 9 || c != 8 || b != 9 || d != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combinaison(int a, int b, int c, int d)
{
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_numbers(a, b, c, d);
			b++;
		}
		a++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	b = 0;
	c = 1;
	d = 0;
	a = 0;
	ft_print_combinaison(a, b, c, d);
}
