#include "../../includes/minishell.h"

void    cmd_no_args(char *cmd, t_data *data)
{
	int	i;

	i = 0;
	while (cmd[i] != ' ' && cmd[i])
		i++;
	data->fork.cmd_no_args = (char *) malloc(i + 1);
	ft_strlcpy(data->fork.cmd_no_args, cmd, i);
}