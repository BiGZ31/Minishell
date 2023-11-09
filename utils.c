#include "minishell.h"

int	ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while(str1[i])
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (0);
	}
	return (1);
}

void	ft_exit(void)
{
	printf("%sGoodbye, thanks for using Minishell !%s\n", PINK, RESET);
	exit (0);
}

void	ft_help(void)
{
	printf("%sThese are a few comands you can test\n  %s'help' %sopen's this menu.\n  %s'pwd' %s shows your current dirrectory.%s\n", G_CYAN, B_BLUE, BLUE, B_BLUE, BLUE, RESET);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}