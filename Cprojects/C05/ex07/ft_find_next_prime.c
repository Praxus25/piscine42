/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:01:37 by mchaduc           #+#    #+#             */
/*   Updated: 2023/05/29 17:42:52 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 2)
	{
		return (2);
	}
	while ((i * i < nb) && (i <= 46340))
	{
		if (nb % i == 0)
		{
			nb++;
			i = 1;
		}
		i++;
	}
	return (nb);
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_find_next_prime(14));
	return 0;
}*/
