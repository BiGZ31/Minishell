#include "../../includes/minishell.h"

int	check_builtin(char *input)
{
	if (!ft_strncmp(input, "pwd", 3))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(input, "env", 3))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(input, "help", 4))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(input, "cd", 2))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(input, "exit", 4))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(input, "echo", 4))
		return (IS_A_BUILTIN);
	else if ((!ft_strncmp(input, "echo -n", 8)))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(input, "export", 6))
		return (IS_A_BUILTIN);
	else if (!ft_strchr(input, '"'))
		return (IS_NOT_A_BUILTIN);
	else
	{
		input = clear_quotes(input);
		return (check_builtin(input));
	}
	return (IS_NOT_A_BUILTIN);
}