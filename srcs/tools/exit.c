#include "../../includes/minishell.h"
void	exitx(char *input)
{
	printf("%sGoodbye, thanks for using KawaiiShell !%s\n", PINK, RESET);
	clear_history();
    free(input);
	exit (0);
}