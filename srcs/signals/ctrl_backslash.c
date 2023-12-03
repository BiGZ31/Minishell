/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctrl_backslash.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:35:32 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/28 22:35:32 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "minishell.h"

void ctrlBackslashHandler(int signum) 
{
	(void)	signum;
	signal(SIGQUIT, SIG_IGN);
}
