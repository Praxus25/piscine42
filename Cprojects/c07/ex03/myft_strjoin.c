/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 21:12:24 by mchaduc           #+#    #+#             */
/*   Updated: 2023/06/01 12:35:45 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_putsep(char *dest, char *sep, int i)
{
	int	n;

	n = 0;
	while (sep[n] != '\0')
	{
		dest[i] = sep[n];
		n++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	go_fin(char *str, int i)
{
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		n;
	int		l;
	char	*dest;

	dest = malloc(sizeof(strs) * size + 1);
	n = 0;
	i = 0;
	if (size <= 0)
		return (dest);
	while (n < size)
	{
		l = 0;
		while (strs[n][l] != '\0')
		{
			dest[i++] = strs[n][l++];
		}
		n++;
		if (n < size)
			dest = ft_putsep(dest, sep, i);
		i = go_fin(dest, i);
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int	main(void)
{
	char *text[10];

	text[0] = "Testando";
	text[1] = "a";
	text[2] = "funcao";
	text[3] = "ft_strjoin";
	text[4] = "com";
	text[5] = "o";
	text[6] = "separador";
	text[7] = "lameralouche - ";
	text[8] = "e tamanho";
	text[9] = "10";

	printf("%s\n", ft_strjoin(10, text, " - "));
}
