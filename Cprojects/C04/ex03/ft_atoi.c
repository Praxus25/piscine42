/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:38:23 by mchaduc           #+#    #+#             */
/*   Updated: 2023/06/11 02:38:05 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	resu(char *str, int i)
{
	int	res;

	res = 0;
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		res = res + str[i] - '0';
		res = res * 10;
		i++;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	res;

	s = -1;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '-') || (str[i] == '+')
		|| (str[i] >= 9 && str[i] <= 13))
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	res = resu(str, i);
	res = res / 10;
	if (s == 1)
		res = res * -1;
	return (res);
}
/*#include <stdio.h>
int main()
{
	int n;
	char *str;
	char lol[]="     ---++-++-7513nfjaf424";
	str = lol;
	n=ft_atoi(str);
	printf("%d", n);
}*/
