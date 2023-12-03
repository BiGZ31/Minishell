/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dots_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 09:05:13 by lumontgo          #+#    #+#             */
/*   Updated: 2023/12/02 09:05:13 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"


int    check_dots_input(char *input)
{
    if (input[0] == '.' && !input[1])
    {
    	printf("KawaiiShell: filename argument required\n .: . filename [arguments]\n");
		return (1);
	}
	return (0);
}