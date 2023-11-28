/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo <lumontgo@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:00:50 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/27 22:12:42 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../../includes/minishell.h"

static int exists(char *file)
{
	char *temp;
	char *pwd_path;
	int	i;
	int start;
	int size;

	i = 0;
	pwd_path = pwd(5);
	while(pwd_path[i])
		i++;
	while(pwd_path[i] != '/')
		i--;
	i++;
	size = i;
	start = i;
	while(pwd_path[size])
		size++;
	temp = malloc(sizeof(char) * size + 1);
	i = 0;
	while(pwd_path[start])
	{
		temp[i] = pwd_path[start];
		start++;
		i++;
	}
	if (ft_strncmp(file, temp, ft_strlen(temp)) == 0) // we need to add a temp with a "\"" in the end also remove the spaces at the end 
		printf("Error: Folder not found.\n");
	//printf("file = %s\n", file);
	free(temp);
	free(pwd_path);
	return (0);
}

void	cd(char *str)
{
	int i;
	char *new;
	int start;
	int size;

	i = 0;
	while(str[i] != ' ' && str[i])
		i++;
	//skipping the first word  (cd ) (args)
	while(str[i] == ' ' && str[i])
		i++;
	//jumping spaces
	start = i;
	while(str[i])
		i++;
	size = i - start;
	new = malloc(sizeof(char) * size + 1);
	i = 0;
	while(i < size)
	{
		new[i] = str[start];
		start++;
		i++;
	}
	chdir(new);
	if (new[0] != '.' && new[1] != '.') //	trying to fix the cd ..
		exists(new);
	free(new);
}