/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finacci.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:37:13 by mchaduc           #+#    #+#             */
/*   Updated: 2023/05/29 16:19:02 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	int	res;

	res = 1;
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (res);
}
/*#include <stdio.h>
int main(void)
{
	printf("%d",ft_fibonacci(3));
	return 0;
}*/
