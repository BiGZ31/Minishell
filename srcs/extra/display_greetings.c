/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:42:32 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/26 19:42:32 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_exit(void)
{
	printf("%sGoodbye, thanks for using KawaiiShell !%s\n", PINK, RESET);
	exit (0);
}

void	ft_help(void)
{
	printf("%sThese are a few comands you can test\n  %s'help' %sOpen's this menu.\n  %s'pwd' %s Shows your current dirrectory.%s\n", G_CYAN, B_BLUE, BLUE, B_BLUE, BLUE, RESET);
	printf("  %s'echo'%s Writes the arguments you prompt.%s\n",B_BLUE, BLUE, RESET);
	printf("  %s'env' %s Shows your current environment.%s\n",B_BLUE, BLUE, RESET);
	printf("  %s'cd'  %s Displays the name of the current directory or changes the current directory.%s\n",B_BLUE, BLUE, RESET);
	printf("  %s'exit'%s Exits the minishell.%s\n",B_BLUE, BLUE, RESET);
}
