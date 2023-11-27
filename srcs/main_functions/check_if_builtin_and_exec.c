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

int	check_builtin(char *input)
{
	if (!ft_strncmp(input, "pwd", 3))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(input, "env", 3))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(input, "help", 4))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(input, "cd", 2))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(input, "exit", 4))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(input, "echo", 4))
		return (IS_A_BUILTIN);
	else if ((!ft_strncmp(input, "echo -n", 8)))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(input, "export", 6))
		return (IS_A_BUILTIN);
	else if (!ft_strchr(input, '"'))
		return (IS_NOT_A_BUILTIN);
	else
	{
		input = clear_quotes(input);
		return (check_builtin(input));
	}
	return (IS_NOT_A_BUILTIN);
}

void	builtin(char *input, char **envp)
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
		builtin(input, envp);
	}

}

void    check_if_builtin_and_exec(char *input, char **envp)
{


		if (check_builtin(input) == IS_A_BUILTIN)
			builtin(input, envp);
		else
			printf("Error: Command not found.\n");
			//fork
}
