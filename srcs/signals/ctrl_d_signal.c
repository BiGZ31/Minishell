#include "minishell.h"

void	ctrlDHandler(int signum)
{
	(void)	signum;
    printf("\n");
    rl_on_new_line();
    rl_replace_line("", 0);
    rl_redisplay();
}