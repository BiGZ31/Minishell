#include "../../includes/minishell.h"

void    cmd_args(char *cmd, t_data *data)
{
	if (ft_strchr(cmd, ' '))
		data->fork.cmd_args = ft_split(cmd, ' ');
	else
	{
		data->fork.cmd_args[0] = ft_substr(cmd);
		data->fork.cmd_args[1] = NULL;
	}
}