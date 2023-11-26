/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 00:33:42 by lumontgo          #+#    #+#             */
/*   Updated: 2023/02/08 00:33:42 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;
	char	*cast;
	size_t	test;

	test = count * size;
	if (test / count != size)
		return (NULL);
	if (test == 0)
		return (malloc(0));
	r = malloc(count * size);
	if (r == NULL)
		return (NULL);
	cast = (char *) r;
	ft_bzero(cast, size * count);
	return (cast);
}
