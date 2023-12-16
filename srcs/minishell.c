/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 09:05:13 by lumontgo          #+#    #+#             */
/*   Updated: 2023/12/02 09:05:13 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	t_data data;
	ft_bzero((void *) &data, sizeof(data));
	ignore_ac_av(ac, av);
	get_path(&data, envp);
	welcome_message();
	signal(SIGINT, ctrlCHandler);
	signal(SIGQUIT, ctrlBackslashHandler);
	while ((data.input = readline("➜ \e[0;38;5;199mKawaii\e[0;38;5;44mShell \033[1;37m•⩊•\e[0m : ")) != NULL)
	{
		add_history(data.input);
		// if (ft_strchr(data->input, '|'))
		// 	pipe();
		// empty_prompt(&data);
		if (check_builtin(data.input) == IS_A_BUILTIN)
			exec_builtin(data.input, envp, &data);
		else if (data.input[0])
			forkv2(data.input, &data, envp);
	}
    return 0;
}
