/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:36:50 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/28 22:36:50 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/minishell.h"

void	exitx(t_data	*data)//TODO: free everything
{
	printf("%sGoodbye, thanks for using KawaiiShell !%s\n", PINK, RESET);
	clear_history();
    free(data->input);
	exit (0);
}