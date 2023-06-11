/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:23:15 by mchaduc           #+#    #+#             */
/*   Updated: 2023/06/07 11:23:18 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*grand_carre(int line, int taille, char tab[line][taille], char obs);
int	*fill(int line, int taille, char obs, char tab[line][taille]);
int	*ft_min(int embala[3]);

int	*grand_carre(int line, int taille, char tab[line][taille], char obs)
{
	int		l;
	int		t;
	int	*result = malloc(sizeof(int)* 3);

	l = 0;
	if (taille == 2)
	{
		result[0] = 0;
		result[1] = 0;
		result[2] = 1;
		return (result);
	}
	while (l < taille)
	{
		if (tab[0][l] == obs)
			tab[0][l] = '0';
		else
			tab[0][l] = '1';
		l++;
	}
	t = 1;
	if (line == 2)
	{
		result[0] = 0;
		result[1] = 0;
		result[2] = 1;
		return (result);
	}
	while (t < line)
	{
		if (tab[t][0] == obs)
		{
			tab[t][0] = '0';
		}
		else
		{
			tab[t][0] = '1';
		}
		t++;
	}
	return (fill(line, taille, obs, tab));
}

int	minval(int l, int t, int line, int taille, char tab[line][taille])
{
	char	a;
	char	b;
	char	c;
	int	d;
	int	e;
	int	f;

	a = tab[l - 1][t];
	b = tab[l - 1][t - 1];
	c = tab[l][t - 1];
	d = a - '0';
	e = b - '0';
	f = c - '0';
	if ((d <= e) && (d <= f))
		return (d + 1);
	else if ((e <= d) && (e <= f))
		return (e + 1);
	else
		return (f + 1);
}

int	*big_space(int big, int line, int taille, char tab[line][taille])
{
	int	t;
	int	l;
	int	*result = malloc(sizeof(int)* 3);

	l = 0;
	while (l < line - 1)
	{
		t = 0;
		while (t < taille - 1)
		{
			if ((tab[l][t] - '0') == big)
			{
				result[0] = l;
				result[1] = t;
				result[2] =big;
				return (result);
			}
			t++;
		}
		l++;
	}
	return (0);
}

int	*fill(int line, int taille, char obs, char tab[line][taille])
{
	int	t;
	int	l;
	int	big;

	l = 1;
	big = 0;
	while (l < line - 1)
	{
		t = 1;
		while (t < taille - 1)
		{
			if (tab[l][t] == obs)
				tab[l][t] = '0';
			else
				tab[l][t] = (minval(l, t, line, taille, tab) + '0');
			if (tab[l][t] - '0' > big)
				big = tab[l][t] - '0';
			t++;
		}
		l++;
	}
	/*int count = 0;
	while (count < line - 2)
	{
		printf("%s",tab[count]);
		printf("\n");
		count++;
	}*/
	return (big_space(big, line, taille, tab));
}

int	*ft_min(int embala[3])
{
	int	n;
	int	i;
	int	obez;
	int	*lao = malloc(sizeof(int)* 2);
	
	i = embala[0];
	n = embala[1];
	obez = embala[2];
	while (obez > 1)
	{
		i--;
		n--;
		obez--;
	}
	lao[0] = i;
	lao[1] = n;
	return (lao);
}
