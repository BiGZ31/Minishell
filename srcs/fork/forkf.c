#include "../../includes/minishell.h"

void	forkf(char *cmd, t_data *data, char **envp)
{
	char	*exec_path;
	int		i;
	pid_t	id;

	exec_path = NULL;
	i = 0;
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
		else if (access(exec_path, F_OK) && !envp[i + 1])
		{
			exec_path = NULL;
			break ;
		}
		i++;
	}
	//printf("path2 = %s\n", exec_path);
	if (exec_path)
	{
		//printf("check\n");
		id = fork();
		if (id == 0)
			execve(exec_path, data->fork.cmd_args, envp);
		else
			waitpid(0, NULL, 0);
	}
}