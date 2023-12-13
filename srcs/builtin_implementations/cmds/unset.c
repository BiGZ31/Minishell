/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:16:46 by lumontgo          #+#    #+#             */
/*   Updated: 2023/12/04 16:16:53 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/minishell.h"

void	unset_var(t_data *data, char *arg)
{
	int i;

	i = 0;
	while(data->exprt[i])
	{
		if (ft_strncmp(data->exprt[i], arg, ft_strlen(arg)) == 0 && data->exprt[i][ft_strlen(arg)] == '=')
		{
			ft_bzero(data->exprt[i], ft_strlen(data->exprt[i]));
			printf("%sVariable unset succesfully!%s\n", RED, RESET);
			return ;
		}
		i++;
	}
	printf("%sVariable not found!%s\n", YELLOW, RESET);
}

void	unset(t_data *data, char *input)
{
	int i;
	char *temp;
	int start;
	int len;

	i = 0;
	while(input[i] != ' ' && input[i])
		i++;
	while (input[i] && input[i] == ' ')
		i++;
	start = i;
	while (input[i] != ' ' && input[i])
		i++;
	len = i - start;
	temp = malloc(sizeof(char) * len + 1);
	i = 0;
	while(i < len)
	{
		temp[i] = input[start];
		start++;
		i++;
	}
	unset_var(data, temp);
}
