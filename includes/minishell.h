/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:55:47 by lumontgo          #+#    #+#             */
/*   Updated: 2023/12/03 14:25:38 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:55:47 by lumontgo          #+#    #+#             */
/*   Updated: 2023/12/03 14:23:53 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:55:47 by lumontgo          #+#    #+#             */
/*   Updated: 2023/12/02 16:55:47 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	pid_t	id;
}				t_fork;

typedef struct	s_data
{
	char	*input;
	char	**exprt;
	int		export_size;
    t_fork  fork;
	char	**path;
	int		*pipex;
}				t_data;


char	*clear_quotes(char *str);
// BUILT IN //

void	exec_builtin(char *input, char **envp, t_data *data);
int		check_builtin(char *input);




/*SIGNALS*/
void	ctrlCHandler(int signum);
void	ctrlBackslashHandler(int signum);

/*UNSET FILES*/
void	unset(t_data *data, char *input);
/* CD FILE*/
void cd(char *str);

/*PWD FILE*/
char    *pwd(int i);

/*ENV FILE*/
void env(char **envp);

/*ECHO FILE*/
void echon(char *str);
void	echo(char *str, t_data	*data);

/*EXPORT FILE*/
void export(char **envp, char *input, t_data *data);
void bubbleSort(char **arr, int size);
void swap(char **a, char **b);
void    create_export(t_data *data, char **envp);
char	*add_equaltoarg(char *arg);
int	check_arg(char *arg);
void    add_arg(char *arg, t_data *data);
char *split(char *input);
int check_input(char    *input);
char	*change_brackets(char *arg);
int	arg_has_brackets(char *arg);
char	*split_no_brackets(char *arg);
void	print_export(t_data	*data);
void	reset_variable(char *arg, t_data *data);
int		arg_is_a_path(char *arg);




//PIPE//
char	*pwd_pipe(void);

// FORK //
void	get_path(t_data *data, char **envp);
void    cmd_no_args(char *cmd, t_data *data);
void    cmd_args(char *cmd, t_data *data);
void	forkv2(char *cmd, t_data *data, char **envp);


// TOOLS //
void	empty_prompt(t_data *data);
void	ignore_ac_av(int ac, char **av);
char	*remove_frist_char_in_string(char *str);
void    free_fork_set_null(t_data *data);
int    check_dots_input(char *input);


void 	help(void);
void	welcome_message(void);

void	exitx(t_data	*data);