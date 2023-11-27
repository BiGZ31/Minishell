#include "../../includes/minishell.h"
void	exitx(char *input)
{
	printf("%sGoodbye, thanks for using KawaiiShell !%s\n", PINK, RESET);
    rl_clear_history();
    free(input);
	exit (0);
}