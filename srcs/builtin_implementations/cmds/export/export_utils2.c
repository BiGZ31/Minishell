/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export_utils2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:24:17 by lumontgo          #+#    #+#             */
/*   Updated: 2023/12/03 14:24:24 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../includes/minishell.h"

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

void	reset_variable(char *arg, t_data *data)
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
		{
			free(data->exprt[j]);
			data->exprt[j] = malloc(sizeof(char) * ft_strlen(arg) + 1);
    		data->exprt[j] = ft_strdup(arg);
		}
		j++;
	}
	printf("%sVariable replaced.%s\n", YELLOW, RESET);
}