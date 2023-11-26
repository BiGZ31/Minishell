/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 00:33:42 by lumontgo          #+#    #+#             */
/*   Updated: 2023/02/08 00:33:42 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*tempdst;
	const char	*tmpsrc;

	i = 0;
	if (!dest && !src)
		return (NULL);
	tempdst = dest;
	tmpsrc = src;
	if (!tempdst)
		return (NULL);
	while (i < n)
	{
		tempdst[i] = tmpsrc[i];
		i++;
	}
	return (tempdst);
}
