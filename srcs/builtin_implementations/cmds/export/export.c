/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_export.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:42:32 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/26 19:42:32 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../includes/minishell.h"

int check_input(char    *input)
{
    int i;

    i = 0;
    while(input[i])
    {
        if (input[i] == ' ' && input[i + 1] != ' ')
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
    printf("Variable created corectly.\n");
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

void export(char **envp, char *input, t_data *data)
{
    char *arg;
    int i;

    i = 0;
    if (!data->exprt)
        create_export(data, envp);
    if (check_input(input) == HAS_NO_ARG)
    {
        while (i < data->export_size)
        {
            printf("%s\n", data->exprt[i]);
            i++;
        }
    }
    else
    {
        arg = split(input);
		if (check_arg(arg) == ARG_HAS_EQUAL)
        	add_arg(arg, data);
		else
		{
			//arg = add_equaltoarg(arg);
			add_arg(arg, data);
		}
    }  
}





	// while(envp[i])
	// {
	// 	j = 0;
	// 	while(envp[i][j] == envp[i + 1][j])
	// 		j++;
	// 	if (envp[i][j] > envp[i + 1][j])
	// 		ft_swap
	// }

// sort ENV en ordre ascii 
// puis rajouter export test=eiuhfie
//