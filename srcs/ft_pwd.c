
#include "minishell.h"

char	*ft_pwd(int i)
{
	char *buf;
	buf=(char *)malloc(100*sizeof(char));
	getcwd(buf,100);
	if (i != 5)
		printf("%s \n",buf);
	if (i == 5)
		return (buf);
	free(buf);
	return (NULL);
}