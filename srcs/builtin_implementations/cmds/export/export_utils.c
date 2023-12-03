/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:22:06 by lumontgo          #+#    #+#             */
/*   Updated: 2023/12/03 14:22:14 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../includes/minishell.h"

int check_input(char    *input)
{
    int i;

    i = 0;
    while(input[i])
    {
        if (input[i] == ' ' && (input[i + 1] != ' ' && input[i + 1] != '\0'))
            return (HAS_ARG);
        i++;
    }
    return (HAS_NO_ARG);
}

char *split(char *input)
{
    int i;
    int start;
    char *arg;

    i = 0;
    while (input[i] != ' ' && input[i])
        i++;
	while(input[i] && input[i] == ' ')
		i++;
    start = i;
    arg = malloc(sizeof(char) * (ft_strlen(input) - start) + 1);
    i = 0;
    while (input[start])
    {
        arg[i] = input[start];
        start++;
        i++;
    }
    arg[i] = '\0';
    return arg;
}

void    add_arg(char *arg, t_data *data)
{
    
    data->exprt[data->export_size] = malloc(sizeof(char) * ft_strlen(arg) + 1);
    data->exprt[data->export_size] = ft_strdup(arg);
    printf("%sVariable created corectly.%s\n", BLUE, RESET);
    data->export_size++;
}

int	check_arg(char *arg)
{
	int	i;

	i = 0;
	while(arg[i])
	{
		if (arg[i] == '=')
			return (ARG_HAS_EQUAL);
		i++;
	}
    return (ARG_HAS_NO_EQUAL);
}

char	*add_equaltoarg(char *arg)
{
	int		i;
	char	*temp;

	i = 0;
	while(arg[i])
		i++;
	temp = malloc(sizeof(char) * ft_strlen(arg) + 4);
	temp = ft_strdup(arg);
	temp[i] = '=';
	i++;
	temp[i] = '\'';
	i++;
	temp[i] = '\'';
	i++;
	temp[i] = '\0';
	return (temp);
}