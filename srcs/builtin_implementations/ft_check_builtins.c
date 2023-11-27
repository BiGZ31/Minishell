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

void	ft_check_builtins(char *str)
{
	char *temp;
    int i;
    int count;

    count = 0;
    i = 0;
    while(str[i])
    {
        if (str[i] == '"')
            i++;
        count++;
        i++;
    }
    temp = malloc(sizeof(char) * count + 1);

    i = 0;
    while(str[i])
    {
        if (str[i] == '"')
            i++;
        temp[count] = str[i];
        i++;
        count++;
    }
    
    printf("%s\n", temp);
}