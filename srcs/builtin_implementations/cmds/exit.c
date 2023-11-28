#include "../../../includes/minishell.h"

void	exitx(t_data	*data)
{
	printf("%sGoodbye, thanks for using KawaiiShell !%s\n", PINK, RESET);
	clear_history();
    free(data->input);
	exit (0);
}