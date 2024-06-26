/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forkv2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:39:30 by lumontgo          #+#    #+#             */
/*   Updated: 2023/12/03 20:08:35 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forkv2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetre <apetre@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:40:25 by apetre            #+#    #+#             */
/*   Updated: 2023/12/03 17:40:25 by apetre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void	fork_sys(t_data *data, char **envp)
{
	int	i;
	char	*temps_to_free;
	char	*exec_path;
	
	i = 0;
	//printf("bite\n");
	while (data->path[i])
	{
		temps_to_free = ft_strjoin(data->path[i], "/");
		exec_path = ft_strjoin(temps_to_free, data->fork.cmd_no_args);
		free(temps_to_free);
		if (access(exec_path, F_OK) == FOUND_BINARY)
			break ;
		i++;
	}
	if (access(exec_path, F_OK) == FAIL)
	{
		printf("%s: command not found\n", data->fork.cmd_no_args);
		free(exec_path);
		free_fork_set_null(data);
		return ;
	}
	data->fork.id = fork();
	if (data->fork.id == 0)
		execve(exec_path, data->fork.cmd_args, envp);
	else
	{
		waitpid(data->fork.id, NULL, 0);
		free(exec_path);
		free_fork_set_null(data);
	}
}

void	fork_other_binary(t_data *data, char **envp, char *pwd)
{
	char	*exec_path;
	char	*cmd_no_dot;

	cmd_no_dot = remove_frist_char_in_string(data->fork.cmd_no_args);
	exec_path = ft_strjoin(pwd, cmd_no_dot);
	data->fork.id = fork();
	if (access(exec_path, F_OK) == FOUND_BINARY)
	{
		if (data->fork.id == 0)
			execve(exec_path, data->fork.cmd_args, envp);
		else
		{
			waitpid(data->fork.id, NULL, 0);
			free(exec_path);
			free(cmd_no_dot);
	   		free_fork_set_null(data);
		}
	}
	else
	{
		printf("%s: command not found%s\n", RED, RESET);
		free(exec_path);
		free(cmd_no_dot);
		free_fork_set_null(data);
	}
}
// cmp_len and the frist if it's to check if the full path is given

void	forkv2(char *cmd, t_data *data, char **envp)
{
	char	*pwd;
	int		cmp_len;

	// int 	i;

	//i = 0;
	pwd = pwd_pipe();
	cmd_args(cmd, data);
	cmd_no_args(cmd, data);
	// printf("pwd : %s\n", pwd);
	// while (data->fork.cmd_args[i])
	// {
	// 	printf("cmd_args %d : %s\n", i, data->fork.cmd_args[i]);
	// 	i++;
	// }
	// printf("cmd_no_args: %s\n", data->fork.cmd_no_args);
	cmp_len = ft_strlen(data->fork.cmd_no_args) - ft_strlen(ft_strchr(pwd, '/'));
	if (!ft_strncmp(data->fork.cmd_no_args, pwd, cmp_len))
	{
		printf("test\n");
		if (access(data->fork.cmd_no_args, F_OK) == FOUND_BINARY)
		{
			printf("test2\n");
			data->fork.id = fork();
			if (data->fork.id == 0)
				execve(data->fork.cmd_no_args, data->fork.cmd_args, envp);
			else
			{
				waitpid(data->fork.id, NULL, 0);
				free_fork_set_null(data);
			}
		}
		else
		{
			printf("%s: command not found:%s%s\n", RED, data->fork.cmd_no_args, RESET);
			free(pwd);
			free_fork_set_null(data);
			return ;
		}
	}
	else if ((cmd[0] == '.' && cmd[1] != '.')
		|| (cmd[0] == '.' && cmd[1] == '.' && !cmd[2]))
	{
		if (!cmd[1])
			printf("KawaiiShell .: filename argument required\n.: usage: . filename [arguments]\n");
		else if (cmd[1] == '.' && !cmd[2])
			printf("..: command not found\n");
		else
			fork_other_binary(data, envp, pwd);
	}
	else
		fork_sys(data, envp);
}
