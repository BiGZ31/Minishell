/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   welcome_message.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:35:32 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/28 22:35:32 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void	welcome_message(void)
{
	printf("%s\n", kaw);
	printf("\n%sYou are using KawaiiShell\nTry using %s'help'%s comand.%s\n\n", G_CYAN, G_BLUE, G_CYAN, RESET);
}