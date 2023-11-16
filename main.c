

#include "minishell.h"

char **get_input(char *input) {
    char **command = malloc(8 * sizeof(char *));
    char *separator = " ";
    char *parsed;
    int index = 0;

    parsed = strtok(input, separator);
    while (parsed != NULL) {
        command[index] = parsed;
        index++;

        parsed = strtok(NULL, separator);
    }

    command[index] = NULL;
    return command;
}

void	ft_shell_parse(char *str)
{
	char **comand;
	
	comand = get_input(str);
	execvp(comand[0], comand);

}

int main(int ac, char **av, char **envp)
{
	char *inpt;

	printf("%sYou are using Minishell\nTry using %s'help'%s comand.%s\n", G_CYAN, G_BLUE, G_CYAN, RESET);
	while (1)
	{
		(void) ac;
		(void) av;
		(void) envp;
		inpt = readline("~/");
		add_history(inpt);
		//parsing(inpt);
		if (ft_strcmp(inpt, "pwd") == 1) //pwd finished
			ft_pwd('0');
		else if (ft_strcmp(inpt, "env") == 1)
			ft_env();
		else if (ft_strcmp(inpt, "help") == 1)
			ft_help();
		else if (ft_cd_comp(inpt) == 1) // cd "add error message when folder not found"
			ft_cd(inpt);
		else if (ft_strcmp(inpt, "exit") == 1) // exit finished
			ft_exit();
		else if (ft_echo_compare(inpt) == 1) //echo finished
			ft_echo(inpt);
		else if ((ft_echon_compare(inpt) == 1)) //echo -n (needs fix)
			ft_echon(inpt);
		else if (ft_strcmp(inpt, "export") == 1)
			ft_export();
		else if (inpt[0] == 'l' && inpt [1] == 's') // ls parsing to shell "error closing minishell on entry"
			ft_shell_parse(inpt);
		else if (ft_strcmp(inpt, "mkdir") == 1)
			ft_shell_parse(inpt);
		else
		{
			printf("Error: command not found!\n");
		}	
    }
    return 0;
}
