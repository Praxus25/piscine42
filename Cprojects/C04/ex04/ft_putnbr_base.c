/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:00:47 by mchaduc           #+#    #+#             */
/*   Updated: 2023/06/11 02:41:24 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ret(int n)
{
	unsigned int	res;

	res = 10;
	while (n != 0)
	{
		res = res + n % 10;
		res = res * 10;
		n = n / 10;
	}
	res = res / 10;
	return (res);
}

int	verif(int i, char *base)
{
	int	n;

	n = i;
	i++;
	while (base[i] != '\0')
	{
		if (base[i] == base[n])
			return (1);
		i++;
	}
	return (2);
}

void	print(int nbr, char *base)
{
	int		n;
	int		p;
	char	m;
	int		l;
	int		g;

	n = 0;
	p = 0;
	while (base[n] != '\0')
	{
		n++;
	}
	p = ret(nbr);
	while (p > n)
	{
		l = p % n;
		m = base[l];
		p = p / n;
		ft_putchar(m);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	v;

	i = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if ((base[i] == '\0') || (base[i + 1] == '\0'))
		return ;
	while (base[i] != '\0')
	{
		if ((base[i] == '-') || (base[i] == '+'))
		{
			return ;
		}
		v = verif(i, base);
		if (v == 1)
		{
			return ;
		}
		i++;
	}
	print(nbr, base);
}

/*int main()
{
	int n;
	char m[]="0123456789ABCDEF"; 
	n = 255;
	ft_putnbr_base(n, m);
}*/
