#include "../../includes/minishell.h"

void	fork_sys(char *cmd, t_data *data, char **envp)
{
	int	i;
	char	*temps_to_free;
	char	*exec_path;
	
	i = 0;
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
		free(exec_path);
		return ;
	}
	data->id = fork();
	if (data->id == 0)
		execve(exec_path, data->fork.cmd_args, envp);
	else
	{
		waitpid(data->id, NULL, 0);
		free(exec_path);
		free(data->fork.cmd_args);
		free(data->fork.cmd_no_args);
		data->fork.cmd_args = NULL;
		data->forks.cmd_no_args = NULL;
	}
}

void	fork_other_binary(char *cmd, t_data *data, char **envp, char *pwd)
{
	char	*exec_path;
	char	*cmd_no_dot;
	int		cmp_len;

	cmp_len = ft_strlen(pwd) - ft_strlen(ft_strchr(pwd, '/'));
	cmd_no_dot = remove_frist_char_in_string(cmd);
	if (!ft_strncmp(cmd_no_dot, pwd, cmp_len))
		exec_path = cmd_no_dot;
	else
		exec_path = ft_strjoin(pwd, cmd_no_dot);
	data->id = fork();
	if (data->id == 0)
		execve(exec_path, data->fork.cmd_args, envp);
	else
	{
		waitpid(data->id, NULL, 0);
		free(exec_path);
		free(cmd_no_dot);
		free(data->fork.cmd_args);
		free(data->fork.cmd_no_args);
		data->fork.cmd_args = NULL;
		data->forks.cmd_no_args = NULL;
	}
}
// cmp_len and the frist if it's to check if the full path is given

void	forkv2(char *cmd, t_data *data, char **envp)
{
	char	*pwd;
	int		i;

	i = 0;
	pwd = pwd_pipe();
	cmd_args(cmd, data);
	cmd_no_args(cmd, data);
	if (cmd[0] '.')
		fork_other_binary(cmd, data, envp, pwd);
	else
		fork_sys(cmd, data, envp);
}
