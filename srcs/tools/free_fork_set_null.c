#include "../../includes/minishell.h"

void    free_fork_set_null(t_data *data)
{
    free(data->fork.cmd_args);
    free(data->fork.cmd_no_args);
    data->fork.cmd_args = NULL;
    data->fork.cmd_no_args = NULL;
}