/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:42:48 by mchaduc           #+#    #+#             */
/*   Updated: 2023/05/24 18:09:50 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_count(char *str);

unsigned int	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	n;

	n = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (n < size)
	{
		if (src[n] == '\0')
		{
			dest[i] = '\0';
		}
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	n = ft_count(dest);
	return (n);
}

int	ft_count(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
