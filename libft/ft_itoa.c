/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 05:20:00 by lumontgo          #+#    #+#             */
/*   Updated: 2023/02/16 05:20:08 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *str, int i, int n, int signe)
{
	while (i >= 0)
	{
		str[i] = (signe * (n % 10)) + 48;
		n = n / 10;
		i--;
	}
	if (signe == -1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		signe;
	int		len;

	signe = 1;
	len = 1;
	i = n;
	if (n < 0)
	{
		signe = -1;
		len = 2;
	}
	while (i / 10 != 0)
	{
		len++;
		i /= 10;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	i = len - 1;
	str = ft_strrev(str, i, n, signe);
	return (str);
}
