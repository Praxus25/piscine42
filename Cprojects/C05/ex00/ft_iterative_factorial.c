/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 09:37:11 by mchaduc           #+#    #+#             */
/*   Updated: 2023/05/28 15:48:32 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	res = nb;
	while (nb > 1)
	{
		nb--;
		res = nb * res;
	}
	return (res);
}
/*int main()
{
	int n= 4;
	n= ft_iterative_factorial(n);
	printf("%d", n);
	return 0;
}*/
