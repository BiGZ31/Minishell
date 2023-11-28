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
	welcome_message();
	printf("BITE\n");
	get_path(&data, envp);

	while (1)
	{
		data.input = readline("➜ \e[0;38;5;199mKawaii\e[0;38;5;44mShell \033[1;37m•⩊•\e[0m : ");
		add_history(data.input);
		// if (ft_strchr(data->input, '|'))
		// 	pipe();
		//empty_prompt(&data);
		if (check_builtin(&data) == IS_A_BUILTIN)
			exec_builtin(&data, envp);
		else if (data.input[0])
			forkf(data.input, &data, envp);
		// printf("%c\n", data.input[0]);
		// printf("%s\n", data.input);
	}
    return 0;
}
