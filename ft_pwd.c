
#include "minishell.h"

void	ft_pwd(void)
{
	char *buf;
	buf=(char *)malloc(100*sizeof(char));
	getcwd(buf,100);
	printf("%s \n",buf);
	free(buf);
}