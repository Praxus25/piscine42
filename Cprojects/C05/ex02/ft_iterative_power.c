/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 15:34:04 by mchaduc           #+#    #+#             */
/*   Updated: 2023/05/29 14:09:06 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	nbinit;

	nbinit = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		nb = nbinit * nb;
		power--;
	}
	return (nb);
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_power(0, 4));
	return 0;
}*/
