/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:23:50 by mchaduc           #+#    #+#             */
/*   Updated: 2023/06/10 23:39:44 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	alpha(char c)
{
	int	v;

	v = 0;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		v = 1;
	}
	if (c >= '0' && c <= '9')
	{
		v = 1;
	}
	return (v);
}

char	*ft_strcapitalize(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if (alpha(str[n]) == 1)
		{
			if ((str[n] >= 'a') && (str[n] <= 'z'))
			{
				str[n] = str[n] - 32;
			}
			n++;
			while (alpha(str[n]) == 1)
			{
				if ((str[n] >= 'A') && (str[n] <= 'Z'))
				{
					str[n] = str[n] + 32;
				}
				n++;
			}
			n--;
		}
		n++;
	}
	return (str);
}
