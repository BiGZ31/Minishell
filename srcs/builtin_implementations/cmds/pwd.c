/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:36:50 by lumontgo          #+#    #+#             */
/*   Updated: 2023/12/04 16:16:59 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/minishell.h"

char	*pwd(int i)
{
	char *buf;

	buf=(char *)malloc(100*sizeof(char));
	getcwd(buf,100);
	if (i != 5)
		printf("%s%s           %s%s%s\n%s%s\n", G_CYAN, FIRST, PINK, buf, G_CYAN, SECOND, RESET);		
	if (i == 5)
		return (buf);
	free(buf);
	return (NULL);
}