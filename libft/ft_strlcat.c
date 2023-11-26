/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:17:09 by lumontgo          #+#    #+#             */
/*   Updated: 2022/12/04 14:17:10 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	srcsize;
	unsigned int	destsize;

	j = 0;
	i = ft_strlen(dest);
	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	if (size < 1)
		return (srcsize + size);
	while (src[j] && i < size -1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < destsize)
		return (srcsize + size);
	else
		return (destsize + srcsize);
}
