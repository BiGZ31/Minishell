/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo <lumontgo@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:00:50 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/27 23:39:37 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../includes/minishell.h"

int main(int ac, char **av, char **envp)
{
	t_data *data;
	
	ft_bzero(s, sizeof(data));
	welcome_message();
	while (1)
	{
		(void) ac;
		(void) av;
		(void) envp;
		data->input = readline("➜ \e[0;38;5;199mKawaii\e[0;38;5;44mShell \033[1;37m•⩊•\e[0m : ");
		add_history(input);
		if (input == NULL || *input == '\0')
		{
			free(input);
			continue ;
		}
		else
			check_if_builtin_and_exec(input, envp);
    }
    return 0;
}
