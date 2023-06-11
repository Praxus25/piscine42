/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:54:52 by mchaduc           #+#    #+#             */
/*   Updated: 2023/06/03 16:08:16 by mchaduc          ###   ########.fr       */
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
		return (NULL);
	}
	res = malloc(sizeof(int) * n);
	n = 0;
	while (min < max)
	{
		res[n] = min;
		n++;
		min++;
	}
	return (res);
}
/*int main(void)
{
	int *a = ft_range(5,25);
	int count = 0;
	while (a[count] != '\0')
	{
		printf("%d ,",a[count]);
		count++;
	}
	return 0;
}*/
