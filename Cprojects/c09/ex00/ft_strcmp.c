/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:37:11 by mchaduc           #+#    #+#             */
/*   Updated: 2023/05/23 10:21:03 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	result;
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if ((s1[i] == '\0') || (s2[i] == '\0'))
		{
			result = s1[i] - s2[i];
			return (result);
		}
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
/*int main(void)
{
	char str[]="ssasasa";
	char str1[]="fefefef";
	ft_strcmp(str,str1);
	return 0;
}*/
