#include "../../includes/minishell.h"

static int		count_pipes(char *input)
{
	int	i;

	i = 0;
	while (*input)
	{
		if (*input == '|')
			i++;
		input++;
	}
	return (i);
}



void    pipe(char *input)
{
    char **new;
	int	nb_pipes;
    int i;

    i = 0;
	nb_pipes = count_pipes(input);
	data->pipex = (char *) malloc(8);
    new = ft_split(input, '|');
    if (check_builtin(new) == IS_A_BUILTIN)
		exec_builtin(new)
	else
	{
		
	}

}


