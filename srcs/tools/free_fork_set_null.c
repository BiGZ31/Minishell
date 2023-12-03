/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_fork_set_null.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 03:14:22 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/29 03:14:22 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void    free_fork_set_null(t_data *data)
{
    free(data->fork.cmd_args);
    free(data->fork.cmd_no_args);
    data->fork.cmd_args = NULL;
    data->fork.cmd_no_args = NULL;
}