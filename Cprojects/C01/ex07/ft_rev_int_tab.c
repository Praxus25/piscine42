/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:09:58 by mchaduc           #+#    #+#             */
/*   Updated: 2023/05/20 18:56:36 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	mid;
	int	n;

	mid = size / 2;
	n = 0;
	size--;
	while (n < mid)
	{
		temp = tab[n];
		tab[n] = tab[size];
		tab[size] = temp;
		n++;
		size--;
	}
}
