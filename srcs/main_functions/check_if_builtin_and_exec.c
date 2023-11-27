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

void    check_if_builtin_and_exec(char *input, char **envp)
{
    	if (!ft_strncmp(input, "pwd", 3))  //pwd finished (why always displaying when no commands)
			pwd('0');
		else if (!ft_strncmp(input, "env", 3))
			env(envp);
		else if (!ft_strncmp(input, "help", 4))
			help();
		else if (!ft_strncmp(input, "cd", 2)) // cd correct the space after file and also the correct also the cd ../
			cd(input);
		else if (!ft_strncmp(input, "exit", 4)) // exit finished
			exitx(input);
		else if (!ft_strncmp(input, "echo", 4)) //echo try and do the double "" and simple ''
			echo(input);
		else if ((!ft_strncmp(input, "echo -n", 8))) //echo -n (needs fix)
			echon(input);
		else if (!ft_strncmp(input, "export", 6))
			export();
		else
		{
			input = clear_quotes(input);
			check_if_builtin_and_exec(input, envp);
		}
			
        // else
        //     fork_needed(input);



		// if(check_builtin(input) == NIET)
		// 	fork_function(input);
}
