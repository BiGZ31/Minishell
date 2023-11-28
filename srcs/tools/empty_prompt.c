#include "../../includes/minishell.h"

void	empty_prompt(t_data *data)
{
	if (data->input == NULL || data->input[0] == '\0')
		free(data->input);
}