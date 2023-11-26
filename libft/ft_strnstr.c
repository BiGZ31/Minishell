/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:43:43 by lumontgo          #+#    #+#             */
/*   Updated: 2023/02/03 19:43:43 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*tmp;

	i = 0;
	tmp = (char *)haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0 || haystack == needle)
		return (tmp);
	while (tmp[i] && i < len)
	{
		c = 0;
		while (tmp[i + c] && needle[c] && tmp[i + c] == needle[c]
			&& i + c < len)
			c++;
		if (c == n_len)
			return (tmp + i);
		i++;
	}
	return (0);
}
