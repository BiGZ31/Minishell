#include "../../includes/minishell.h"

void	get_path(t_data *data, char **envp)
{
	int	i;

	i = 0;
	while(envp[i])
	{
		if(!ft_strncmp(envp[i], "PATH=", 5))
			break ;
		else
			i++;
	}
	data->path = ft_split(envp[i], ':');
}
