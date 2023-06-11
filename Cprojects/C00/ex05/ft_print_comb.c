/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:19:46 by mchaduc           #+#    #+#             */
/*   Updated: 2023/05/18 21:07:47 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int a, int b, int c)
{
	if (a < b && b < c)
	{
		a = a + '0';
		ft_putchar(a);
		a = a - '0';
		b = b + '0';
		ft_putchar(b);
		b = b - '0';
		c = c + '0';
		ft_putchar(c);
		c = c - '0';
		if (a != 7 || b != 8 || c != 9)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = -1;
	while (a < 7)
	{
		a++;
		b = 0;
		while (b < 8)
		{
			b++;
			c = 1;
			while (c < 9)
			{
				c++;
				ft_print_number(a, b, c);
			}
		}
	}
}
/*
int main()
{
	ft_print_comb();
	return 0;
}
*/
