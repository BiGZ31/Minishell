#include "../../includes/minishell.h"

void	forkf(char *cmd, char *data)
{
	data->fork.cmd_args = ft_split(cmd, ' ');
	cmd_no_args(cmd, data);
	
}