#include "../../includes/minishell.h"

void    cmd_no_args(char *cmd, t_data *data)
{
	int	i;

	while (cmd[i] = ' ')
		i++;
	data->fork.cmd_no_args = (char *) malloc(i + 1);
	data->fork.cmd_no_args[i] = '\0';
	ft_strlcpy(data->fork.cmd_no_args, cmd, i);
}