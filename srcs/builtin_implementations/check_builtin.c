#include "../../includes/minishell.h"

int	check_builtin(t_data *data)
{
	if (!ft_strncmp(data->input, "pwd", 3))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(data->input, "env", 3))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(data->input, "help", 4))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(data->input, "cd", 2))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(data->input, "exit", 4))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(data->input, "echo", 4))
		return (IS_A_BUILTIN);
	else if ((!ft_strncmp(data->input, "echo -n", 8)))
		return (IS_A_BUILTIN);
	else if (!ft_strncmp(data->input, "export", 6))
		return (IS_A_BUILTIN);
	else if (!ft_strchr(data->input, '"'))
		return (IS_NOT_A_BUILTIN);
	else
	{
		data->input = clear_quotes(data->input);
		return (check_builtin(data));
	}
	return (IS_NOT_A_BUILTIN);
}