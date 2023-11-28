# include "minishell.h"

void ctrlBackslashHandler(int signum) 
{
	(void)	signum;
	signal(SIGQUIT, SIG_IGN);
}
