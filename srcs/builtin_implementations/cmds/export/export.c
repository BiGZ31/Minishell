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

int	arg_is_a_path(char *arg)
{
	int	i;

	i = 0;
	while(arg[i])
	{
		if (arg[i] == '$' && arg[i - 1] != '\\')
			return (1);
		i++;
	}
	return (0);
}

char	*join_everything(char *new_path, char *first_part, char *second_part)
{
	char *final;
	char *temp;

	temp = ft_strjoin(first_part, new_path);
	final = ft_strjoin(temp, second_part);
	free(temp);
	free(first_part);
	free(second_part);
	return (final);
}

char	*creating_new_arg_with_path(char *first_part, char *second_part, char *path)
{
	int	i;
	int	j;
	int	len;
	char *new_path;

	i = 0;
	while(path[i] != '=')
		i++;
	i++;
	len = i;
	while(path[len])
		len++;
	new_path = malloc(sizeof(char) * len);
	j = 0;
	while(j < len)
	{
		new_path[j] = path[i];
		i++;
		j++;
	}
	return (join_everything(new_path, first_part, second_part));
}

char	*add_path_to_arg(char *path, char *arg)
{
	int	i;
	int j;
	int len;
	char	*first_part;
	int	pos;
	char	*second_part;

	(void) path;
	i = 0;
	while(arg[i] != '$' && arg[i - 1] != '\\')
		i++;
	j = i;
	first_part = malloc(sizeof(char) * j + 1);
	j = 0;
	while(j < i)
	{
		first_part[j] = arg[j];
		j++;
	}
	while(arg[i] && arg[i] != ' ')
		i++;
	pos = i;
	len = ft_strlen(arg) - pos;
	second_part = malloc(sizeof(char) * len + 1);
	i = 0;
	while(i < len)
	{
		second_part[i] = arg[pos];
		pos++;
		i++;
	}
	return (creating_new_arg_with_path(first_part, second_part, path));
}

char *compare_path(t_data *data, char *path, char *arg)
{
	int	i;
	int	j;
	j = 0;
	i = 0;
	while(path[j] && path[j] != ' ')
		j++;
	while(data->exprt[i])
	{
		if (ft_strncmp(data->exprt[i], path, j) == 0)
			arg = add_path_to_arg(data->exprt[i], arg);
		i++;
	}
	return (arg);
}

char	*create_arg_with_path(t_data *data, char *arg)
{
	int	i;
	int	len;
	int	start;
	char	*temp;

	i = 0;
	while(arg[i])
	{
		if (arg[i] == '$')
			break;
		i++;
	}
	start = i + 1;
	len = 0;
	while(arg[i] && (arg[i] != ' ' || arg[i] != '"'))
	{
		len++;
		i++;
	}
	temp = malloc(sizeof(char) * len + 1);
	i = 0;
	while(i < len)
	{
		temp[i] = arg[start];
		start++;
		i++;
	}
	temp[i] = '\0';
	return (compare_path(data, temp, arg));
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
		if (arg_is_a_path(arg) == 1)
			arg = create_arg_with_path(data, arg);
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