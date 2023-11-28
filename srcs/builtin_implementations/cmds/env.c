/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:55:58 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/26 20:06:10 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/minishell.h"

void	env(char **envp)// add the function when you moove path it also mooves
{
	int	i;

	i = 0;
	while(envp[i])
	{
		printf("%s\n", envp[i]);
		i++;
	}
}