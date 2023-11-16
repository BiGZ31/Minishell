# include "minishell.h"

int	ft_echo_compare(char *str)
{
	if (str[0] == 'e' && str[1] == 'c' && str[2] == 'h' && str[3] == 'o' && (str[4] == ' ' || str[4] == '\0'))
		return (1);
	return (0);
}

int	ft_echon_compare(char *str)
{
	int i;

	i = 0;
	if (str[0] == 'e' && str[1] == 'c' && str[2] == 'h' && str[3] == 'o' && str[4] == ' ')
		i = 4;
	while(str[i] == ' ')
	{
		i++;
		if (str[i] == '-' && str[i + 1] == 'n')
			return (1);
	}
	return (0);
}

void	ft_echon(char *str)
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


void	ft_echo(char *str)
{
	int i;
	int bin;

	bin = 0;
	i = 0;
	while(str[i])
	{
		while(i < 4)
			i++;
		while(str[i] == ' ')
		{
			if (bin == 1)
				break;
			i++;
		}
		if (str[i] == '"')
			i++;
		bin = 1;
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}