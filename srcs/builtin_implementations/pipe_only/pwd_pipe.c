#include "../../../includes/minishell.h"

char	*pwd_pipe(int i)
{
	char *buf;
	buf=(char *)malloc(100*sizeof(char));
	getcwd(buf,100);
	return (buf);
}
