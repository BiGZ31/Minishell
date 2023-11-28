/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_builtin_and_exec.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo <lumontgo@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:00:50 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/27 23:06:51 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void	exec_builtin(t_data *data, char **envp)
{
	if (!ft_strncmp(data->input, "pwd", 3))  //pwd finished (why always displaying when no commands)
		pwd('0');
	else if (!ft_strncmp(data->input, "env", 3))
		env(envp);
	else if (!ft_strncmp(data->input, "help", 4))
		help();
	else if (!ft_strncmp(data->input, "cd", 2)) // cd correct the space after file and also the correct also the cd ../
		cd(data->input);
	else if (!ft_strncmp(data->input, "exit", 4)) // exit finished
		exitx(data);
	else if (!ft_strncmp(data->input, "echo", 4)) //echo try and do the double "" and simple ''
		echo(data->input);
	else if ((!ft_strncmp(data->input, "echo -n", 8))) //echo -n (needs fix)
		echon(data->input);
	else if (!ft_strncmp(data->input, "export", 6))
		export();
	else
	{
		data->input = clear_quotes(data->input);
		exec_builtin(data, envp);
	}
}
