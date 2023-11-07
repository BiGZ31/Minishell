

#include "minishell.h"

// void	ft_pwd(void)
// {
// 	char *cwd;

//    if (getcwd(cwd, sizeof(cwd)) != NULL) 
//    {
//        printf("Current working dir: %s\n", cwd);
//    } 
//    else
//        perror("getcwd() error");
// }

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

int	ft_echo_compare(char *str)
{
	if (str[0] == 'e' && str[1] == 'c' && str[2] == 'h' && str[3] == 'o' && str[4] == ' ')
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
		bin = 1;
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
        char *inpt;

        while (1)
        {
                inpt = readline("~/");
                add_history(inpt);
				if (ft_strcmp(inpt, "pwd") == 1)
					printf("In dev !\n");
				else if (ft_strcmp(inpt, "clear") == 1)
					clear_history();
				else if (ft_strcmp(inpt, "exit") == 1)
					exit(0);
				else if (ft_echo_compare(inpt) == 1)
					ft_echo(inpt);
				else if ((ft_echon_compare(inpt) == 1))
					ft_echon(inpt);
				else
				{
					printf("Error: command not found!\n");
				}
                //printf("%s", inpt);
				
        }

        return 0;

}
