/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:54:34 by mchaduc           #+#    #+#             */
/*   Updated: 2023/05/22 08:19:41 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	n;
	int	temp;

	n = 0;
	temp = str[n] - '0';
	if (str[n] == '\0')
	{
		return (1);
	}
	while (str[n] != '\0')
	{
		if ((temp <= 9) && (temp >= 0))
		{
			n++;
			temp = str[n] - '0';
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main()
{
	printf("%d", ft_str_is_numeric("01948987493"));
	printf("\n%d", ft_str_is_numeric("0484882j8995489"));
	printf("\n%d", ft_str_is_numeric("-_jsdsdc67sdlkc,"));
*/
