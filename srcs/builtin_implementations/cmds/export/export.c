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
	//printf("temp = %s\n", temp);
	return (temp);
}

char	*change_brackets(char *arg)
{
	int	i;

	i = 0;
	while(arg[i])
	{
		if (arg[i] == '"')
			arg[i] = '\'';
		i++;
	}
	return (arg);
}

int	arg_has_brackets(char *arg)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while(arg[i])
	{
		if (arg[i] == '"')
			count++;
		if (count == 2)
			return (ARG_HAS_BRACKETS);
		i++;
	}
	return (ARG_HAS_NO_BRACKETS);
}

char	*split_no_brackets(char *arg)
{
	int	i;
	int	size;
	char	*temp;

	size = 0;
	while(arg[size] && arg[size] != ' ')
		size++;
	temp = malloc(sizeof(char) * (size + 1));
	i = 0;
	while(i < size)
	{
		temp[i] = arg[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

void	print_export(t_data	*data)
{
	int	i;

	i = 0;
	while (i < data->export_size)
	{
		printf("%s\n", data->exprt[i]);
		i++;
	}
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
		if (arg_already_a_variable(arg))
			reset_variable(arg, data);
		if (arg_has_brackets(arg) == ARG_HAS_NO_BRACKETS)
			arg = split_no_brackets(arg);
		if (check_arg(arg) == ARG_HAS_EQUAL)
		{
			if (arg_has_brackets(arg) == ARG_HAS_BRACKETS)
				arg = change_brackets(arg);
			add_arg(arg, data);
		}
		else
		{
			arg = add_equaltoarg(arg);
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