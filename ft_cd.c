
#include "minishell.h"

int	ft_cd_comp(char *str)
{
	if(str[0] == 'c' && str[1] == 'd')
		return (1);
	return (0);
}

int	ft_check_file(char *folder)
{
	int i;

	i = 0;
	while(folder[i])
	{
		if (folder[i] == ' ' && folder[i + 1] != ' ')
			printf("Error: Folder not found.\n");
		i++;
	}
	return (0);
}

int ft_cd_exists(char *file)
{
	char *temp;
	char *pwd;
	int	i;
	int start;
	int size;

	i = 0;
	pwd = ft_pwd(5);
	while(pwd[i])
		i++;
	while(pwd[i] != '/')
		i--;
	i++;
	size = i;
	start = i;
	while(pwd[size])
		size++;
	temp = malloc(sizeof(char) * size + 1);
	i = 0;
	while(pwd[start])
	{
		temp[i] = pwd[start];
		start++;
		i++;
	}
	if (ft_strcmp(file, temp) == 0) // we need to add a temp with a "\"" in the end 
		printf("Error: Folder not found.\n");
	free(temp);
	free(pwd);
	return (0);
}

void	ft_cd(char *str)
{
	int i;
	char *new;
	int start;
	int size;

	i = 0;
	while(str[i] != ' ' && str[i])
		i++;
	while(str[i] == ' ' && str[i])
		i++;
	start = i;
	while(str[i])
		i++;
	size = i - start;
	new = malloc(sizeof(char) * size + 1);
	i = 0;
	while(i < size)
	{
		new[i] = str[start];
		start++;
		i++;
	}
	ft_check_file(new);
	chdir(new);
	if (new[0] != '.' && new[1] != '.') //	trying to fix the cd ..
		ft_cd_exists(new);
	free(new);
}