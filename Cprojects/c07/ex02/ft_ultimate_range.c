/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:59:31 by mchaduc           #+#    #+#             */
/*   Updated: 2023/06/03 21:51:09 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	n;

	n = max - min;
	if (n <= 0)
	{
		res = NULL;
		return (res);
	}
	res = (int *)malloc(sizeof(int) * (n + 1));
	n = 0;
	while (min < max)
	{
		res[n] = min;
		n++;
		min++;
	}
	return (res);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	taille;

	taille = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	return (taille);
}
