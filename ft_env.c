# include "minishell.h"

void	ft_env(char **envp)
{
	int	i;

	i = 0;
	while(envp[i])
	{
		printf("%s\n", envp[i]);
		i++;
	}
}