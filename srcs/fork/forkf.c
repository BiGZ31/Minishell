/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forkf.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 01:50:56 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/29 01:50:56 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void	forkf(char *cmd, t_data *data, char **envp)
{
	char	*exec_path;
	int		i;
	pid_t	id;

	exec_path = NULL;
	i = 0;
//	printf("cmd before = %s\n", cmd);
	// if (ft_strchr(cmd, '.'))
	// {
	// 	id = fork();
	// 	if (id == 0)
	// 	{
	// 		// free(data->input);
	// 		// data->input = NULL;
	// 		char *buf;
	// 		buf=(char *)malloc(100*sizeof(char));
	// 		getcwd(buf,100);
	// 		//printf("cmd after = %s\n", cmd);
	// 		cmd = cmd + 1;
	// 		cmd = ft_strjoin(buf, cmd);
	// 		// printf("path join  = %s\n", cmd);
	// 		char *argv[] = {cmd, NULL};
	// 		execve(cmd, argv, envp);
	// 		perror("\t\t\texecve");
    //     	exit(EXIT_FAILURE);
	// 	}
	// 	else
	// 		waitpid(0, NULL, 0);
	// 	//printf("cmd after2 = %s\n", cmd);
	// 	return ;
	// }
	while(*cmd == ' ')
		cmd++;
	// if (*cmd == '.')
	// 	cmd++;
	data->fork.cmd_args = ft_split(cmd, ' ');
	cmd_no_args(cmd, data);
	while(data->path[i])
	{
		//printf("cmd no args = %s\n", data->fork.cmd_no_args);
		exec_path = ft_strjoin(data->path[i], "/");
		exec_path = ft_strjoin(exec_path, data->fork.cmd_no_args);
		//printf("path1 = %s\n", exec_path);
		if (!access(exec_path, F_OK))
			break;
		else if (access(exec_path, F_OK) != 0 && !envp[i + 1])
		{
			free(exec_path);
			exec_path = NULL;
			break ;
		}
		i++;
	}
	//printf("path2 = %s\n", exec_path);
	if (exec_path)
	{
		printf("check\n");
		id = fork();
		if (id == 0)
			execve(exec_path, data->fork.cmd_args, envp);
		else
		{
			waitpid(0, NULL, 0);
			free(exec_path);
		}
	}
	else
		printf("KawaiiShell: command not found: %s\n", data->fork.cmd_no_args);
}
