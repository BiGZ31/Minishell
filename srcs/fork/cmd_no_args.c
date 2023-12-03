/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_no_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:35:32 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/28 22:35:32 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void    cmd_no_args(char *cmd, t_data *data)
{
	int	i;

	i = 0;
	while (cmd[i] != ' ' && cmd[i])
		i++;
	data->fork.cmd_no_args = (char *) malloc(i + 1);
	ft_strlcpy(data->fork.cmd_no_args, cmd, i);
}