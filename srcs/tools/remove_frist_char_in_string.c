/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_frist_char_in_string.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 03:14:22 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/29 03:14:22 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

char	*remove_frist_char_in_string(char *str)
{
	int	len;
	char *new;
	int	i;
	int	j;


	i = 1;
	j = 0;
	len = ft_strlen(str);
	new = (char *) malloc(len);
	while (str[i])
		new[j++] = str[i++];
	new[j] = '\0';
	return (new);
}