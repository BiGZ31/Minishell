#include "minishell.h"

void	ctrlDHandler(int signum)
{
	(void)	signum;
    printf("\nCtrl-D pressed. Exiting...\n");
    exit(0);
}