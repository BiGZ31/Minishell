/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:00:50 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/26 20:00:50 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../includes/minishell.h"

int main(int ac, char **av, char **envp)
{
	char *input;
	printf("%s", kaw);
	printf("\n%sYou are using Minishell\nTry using %s'help'%s comand.%s\n\n", G_CYAN, G_BLUE, G_CYAN, RESET);
	while (1)
	{
		(void) ac;
		(void) av;
		(void) envp;
		input = readline("\e[0;38;5;199mKawaii\e[0;38;5;44mShell \033[1;37m•⩊• \e[0m: ");
		add_history(input);
		//parsing(inpt);
		if (input == NULL || *input == '\0')
		{
			free(input);
			continue ;
		}
		else
			check_ourft_or_fork(input, envp);
    }
    return 0;
}
