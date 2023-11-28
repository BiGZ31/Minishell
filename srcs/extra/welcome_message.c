#include "../../includes/minishell.h"

void	welcome_message(void)
{
	printf("%s", kaw);
	printf("\n%sYou are using KawaiiShell\nTry using %s'help'%s comand.%s\n\n", G_CYAN, G_BLUE, G_CYAN, RESET);
}