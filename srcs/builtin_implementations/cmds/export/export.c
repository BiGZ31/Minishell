/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:55:47 by lumontgo          #+#    #+#             */
/*   Updated: 2023/12/03 14:22:59 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:55:47 by lumontgo          #+#    #+#             */
/*   Updated: 2023/12/03 14:21:40 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../includes/minishell.h"

int	arg_already_a_variable(t_data *data, char *arg)
{
	int	e;
	int	i;
	int	j;

	j = 0;
	e = 0;
	while(arg[e])
	{
		if (arg[e] == '=')
			break;
		e++;
	}
	while(data->exprt[j])
	{
		i = 0;
		while(data->exprt[j][i])
		{
			if (data->exprt[j][i] == '=')
				break;
			i++;
		}
		if (ft_strncmp(arg, data->exprt[j], e) == 0 && ft_strncmp(arg, data->exprt[j], i) == 0)
				return (VAR_EXISTS);
		j++;
	}
	return (VAR_DOES_NOT_EXIST);
}

void export(char **envp, char *input, t_data *data)
{
    char *arg;

    if (!data->exprt)
        create_export(data, envp);
    if (check_input(input) == HAS_NO_ARG)
		print_export(data);
    else
    {
        arg = split(input);
		if (arg[0] == '=')
		{
			printf("%sBad assignment.%s\n", RED, RESET);
			return ;
		}
		if (arg_has_brackets(arg) == ARG_HAS_NO_BRACKETS)
			arg = split_no_brackets(arg);
		if (check_arg(arg) == ARG_HAS_EQUAL)
		{
			if (arg_has_brackets(arg) == ARG_HAS_BRACKETS)
				arg = change_brackets(arg);
			if (arg_already_a_variable(data, arg) == VAR_EXISTS)
				reset_variable(arg, data);
			else
				add_arg(arg, data);
		}
		else
		{
			arg = add_equaltoarg(arg);
			if (arg_already_a_variable(data, arg) == VAR_EXISTS)
				reset_variable(arg, data);
			else
				add_arg(arg, data);
		}
    }  
}

/*

	find a strncmp of tthe lenght of the word when found = to the char *[1]of exprt
	once found replace 
	also try and do unvalid argument if only = and nothing before 

*/