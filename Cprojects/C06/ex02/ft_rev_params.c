/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:43:58 by mchaduc           #+#    #+#             */
/*   Updated: 2023/05/29 23:01:04 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	n;
	int	res;

	res = argc - 1;
	i = 0;
	n = 1;
	while (n < argc)
	{
		while (argv[res][i] != '\0')
		{
			ft_putchar(argv[res][i]);
			i++;
		}
		i = 0;
		ft_putchar('\n');
		n++;
		res--;
	}
	return (0);
}
