/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:27:38 by mchaduc           #+#    #+#             */
/*   Updated: 2023/06/07 22:03:04 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include "ft_stock_str.h"

int	ret(int n)
{
	long	nv;

	nv = 10;
	while (n != 0)
	{
		nv = nv + n % 10;
		n = n / 10;
		nv = 10 * nv;
	}
	return (nv);
}

void	ft_putnbr(int nb)
{
	int		n;
	char	m;

	m = '-';
	if (nb < 0)
	{
		write (1, &m, 1);
		nb *= -1;
	}
	n = ret(nb);
	n /= 10;
	while (n > 10)
	{
		nb = n % 10;
		m = nb + '0';
		write (1, &m, 1);
		n = n / 10;
	}
	write(1, "\n", 1);
}

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	n;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		n = par[i].size;
		ft_putnbr(n);
		ft_putstr(par[i].copy);
		i++;
	}
}
