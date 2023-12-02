#include "../../includes/minishell.h"


int    check_dots_input(char *input)
{
    if (input[0] == '.' && !input[1])
    {
    	printf("KawaiiShell: filename argument required\n .: . filename [arguments]\n");
		return (1);
	}
	return (0);
}