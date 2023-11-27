/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ourft_or_fork.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:00:50 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/26 20:00:50 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void    check_ourft_or_fork(char *input, char **envp)
{
    	if (!ft_strncmp(input, "pwd", 3))  //pwd finished (why always displaying when no commands)
			ft_pwd('0');
		else if (!ft_strncmp(input, "env", 3))
			ft_env(envp);
		else if (!ft_strncmp(input, "help", 4))
			ft_help();
		else if (!ft_strncmp(input, "cd", 2)) // cd correct the space after file and also the correct also the cd ../
			ft_cd(input);
		else if (!ft_strncmp(input, "exit", 4)) // exit finished
			ft_exit();
		else if (!ft_strncmp(input, "echo", 4)) //echo try and do the double "" and simple ''
			ft_echo(input);
		else if ((!ft_strncmp(input, "echo -n", 8))) //echo -n (needs fix)
			ft_echon(input);
		else if (!ft_strncmp(input, "export", 6))
			ft_export();
		else
		{
			input = clear_quotes(input);
			check_ourft_or_fork(input, envp);
		}
			
        // else
        //     fork_needed(input);



		// if(check_builtin(input) == NIET)
		// 	fork_function(input);
}
