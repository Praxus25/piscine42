/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:46:01 by mchaduc           #+#    #+#             */
/*   Updated: 2023/05/23 11:33:37 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	n;

	n = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (n < nb)
	{
		if (src[n] == '\0')
		{
			dest[i] = '\0';
			return (dest);
		}
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
