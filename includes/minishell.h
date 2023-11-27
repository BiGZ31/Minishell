/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo <lumontgo@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:42:32 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/27 23:22:48 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <errno.h>
# include <sys/types.h>
# include <dirent.h>
# include "libft.h"
# include "enums.h"
# include "graphic.h"


typedef struct	s_fork
{
    char	*cmd_no_args;
    char	**cmd_args;
}				t_fork;

typedef struct	s_data
{   
	char	*input;
    t_fork  fork;
	int		*pipex;
}				t_data;

// CHECK INPUT //

void    check_if_builtin_and_exec(char *input, char **envp);
char	*clear_quotes(char *str);


/* CD FILE*/
void cd(char *str);

/*PWD FILE*/
char    *pwd(int i);

/*ENV FILE*/
void env(char **envp);

/*ECHO FILE*/
void echon(char *str);
void echo(char *str);

/*EXPORT FILE*/
void export(void);

/*UTILS FILE*/
void help(void);
void exitx(char *input);