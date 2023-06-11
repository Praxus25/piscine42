/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:36:41 by mchaduc           #+#    #+#             */
/*   Updated: 2023/06/07 11:36:44 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;
	char c;

	i = 0;
	while(str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

void ft_print_square(int line, int taille , char map[line][taille],int *bot, int *top, char plein)
{
	int	topx;
	int	topy;
	int	botx;
	int	boty;
	int sauv;


	topy = top[0]; //+ 2;
	topx = top[1]; //+ 2;
	botx = bot[1];
	boty = bot[0];
	sauv = topx;
	while(topy <= boty )
	{
		topx = sauv;
		while(topx <= botx )
		{
			map[topy][topx] = plein;
			topx++;
		}
		topy++;
	}
}