/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo <lumontgo@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:42:32 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/27 23:47:37 by lumontgo         ###   ########.fr       */
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
# include <sys/wait.h>
# include <dirent.h>
# include <fcntl.h>
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
	char	**path;
	int		*pipex;
}				t_data;


char	*clear_quotes(char *str);
// BUILT IN //

void	exec_builtin(t_data *data, char **envp);
int		check_builtin(t_data *data);







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



// FORK //
void	get_path(t_data *data, char **envp);
void    cmd_no_args(char *cmd, t_data *data);
void	forkf(char *cmd, t_data *data, char **envp);


// TOOLS //
void	empty_prompt(t_data *data);
void	ignore_ac_av(int ac, char **av);


void 	help(void);
void	welcome_message(void);

void	exitx(t_data	*data);