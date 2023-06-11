/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:37:16 by mchaduc           #+#    #+#             */
/*   Updated: 2023/05/24 17:39:44 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_str(char *str, char *to_find, int count, char *res)
{
	int	a;
	int	b;

	while (str[count])
	{
		if (str[count] == to_find[0])
		{
			a = count ;
			b = 0;
			while (str[a] == to_find[b])
			{
				a++;
				b++;
				if (to_find[b] == '\0')
				{
					res = &str[a] - b;
					return (res);
				}
			}
		}
		count++;
	}
	return (NULL);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		count;
	char	*res;
	char	*res1;

	count = 0;
	res = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	res1 = ft_str(str, to_find, count, res);
	return (res1);
}
