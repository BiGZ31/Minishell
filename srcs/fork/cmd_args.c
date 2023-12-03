/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 03:14:22 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/29 03:14:22 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void    cmd_args(char *cmd, t_data *data)
{
	if (ft_strchr(cmd, ' '))
		data->fork.cmd_args = ft_split(cmd, ' ');
	else
	{
		data->fork.cmd_args = (char **) malloc(16);
		data->fork.cmd_args[0] = ft_strdup(cmd);
		data->fork.cmd_args[1] = NULL;
	}
}
