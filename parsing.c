# include "minishell.h"

char	**count_pipes(char *str)
{
	int i;
	char **buff;
	int count;

	count = 0;
	i = 0;
	while(str[i])
	{
		if (str[i] == '|')
			count++;
		i++;
	}
	i = 0;
	buff = malloc(sizeof(char *) * count + 1);
	// maybe only split when using | (pipes) then compare the char each time to re split with the ' ' (spaces)
}

char	**fill_char(char **temp, char *str)
{
	int i;
	int end;
	int	j;

	j = 0;
	end = 0;
	i = 0;
	while(str[i] != '|')
		i++;
	end = i;
	i = 0;
	while(temp[j])
	{
		while(i <= end)
		{
			temp[j] = malloc (sizeof(char) * end + 1);
			temp[j][i] == str[i];
			i++;
		}
		j++;
	}
	printf("%s\n", temp[0]);
}