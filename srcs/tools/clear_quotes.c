/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_builtins.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:00:50 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/26 20:00:50 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/minishell.h"

char	*clear_quotes(char *str)
{
	char *temp;
    int i;
    int count;

    count = 0;
    i = 0;
    while(str[i])
    {
        if (str[i] == '"')
            count--;
		count++;
        i++;
    }
    temp = malloc(sizeof(char) * count);
    i = 0;
	count = 0;
    while(str[i])
    {
        while (str[i] == '"')
            i++;
        temp[count] = str[i];
        i++;
        count++;
    }
	temp[count] = '\0';
	return (temp);
}