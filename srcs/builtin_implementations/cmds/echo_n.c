#include "../../../includes/minishell.h"

void	echon(char *str)
{
	int i;
	// int bin;
	// int bin2;

	// bin = 0;
	// bin2 = 0;
	i = 4;
	while(str[i])
	{
		while(str[i] != '-' && str[i + 1] != 'n')
		{
			i++;				
		}
		i = i + 2;
		printf("%c", str[i]);
		i++;
	}
	printf("%%");
}
// use a search str in str of echo to get the $args or stuff then when found delete and %s $ARGS