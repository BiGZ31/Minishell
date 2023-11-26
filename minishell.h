
# include <string.h>
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <errno.h>
# include <sys/types.h>
# include <dirent.h>

# define BRAIN "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⡿⠿⠿⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⣿⣿⣿⣿⣿⡿⠛⠉⠀⠀⠀⠹⣧⣀⣠⡄⠀⠀⢸⡯⠈⠙⠻⢿⣿⣿⣿⣿⣿⣿\n⣿⣿⣿⣿⡇⠀⠀⠀⠘⢻⣦⠀⠈⠉⠉⢀⣀⣀⡼⠃⢠⣄⠀⠀⠉⢻⣿⣿⣿⣿\n⣿⣿⡏⠈⠳⣦⣶⠀⠀⢠⡿⠀⠀⢠⡾⠛⠛⠉⠁⠀⢸⣇⡀⠀⣀⡼⠋⢻⣿⣿\n⣿⣿⡇⠀⠀⠀⠀⣀⣴⠟⠁⠀⠀⣿⠁⠀⠀⠤⣤⡀⠀⠉⠛⠛⠋⠀⠀⠀⢹⣿\n⣿⠋⠛⠻⠿⠟⠛⠋⠁⠀⠀⠀⠀⠹⣧⣀⠀⠀⠈⢻⡆⠀⠀⣀⣠⡀⠀⠀⠀⣿\n⣿⡇⠀⠀⢀⣤⣤⠄⠀⠀⠀⠀⠀⠀⠈⠙⠃⠀⠀⣼⠇⠀⣼⡏⠉⠁⠀⠀⢠⣿\n⣿⣿⡀⢰⡟⠁⠀⠀⢀⣴⠟⠻⢶⡄⠀⠀⢀⣠⣾⣿⣤⣤⣿⣧⣀⣀⣀⣴⣿⣿\n⣿⣿⣿⣾⣧⡀⠀⠀⠈⠛⠀⠀⣨⣿⠶⠚⠋⠉⢉⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⣿⣿⣿⣿⠛⠿⢶⣤⣤⣴⠶⠟⠋⣀⡀⠀⣀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⣿⣿⣿⣿⣷⣄⡀⠀⠀⠀⠀⢀⣴⠟⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠛⢁⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
# define MINISHELL " .----------------.  .----------------.  .-----------------. .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------. \n| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n| | ____    ____ | || |     _____    | || | ____  _____  | || |     _____    | || |    _______   | || |  ____  ____  | || |  _________   | || |   _____      | || |   _____      | |\n| ||_   \\  /   _|| || |    |_   _|   | || ||_   \\|_   _| | || |    |_   _|   | || |   /  ___  |  | || | |_   ||   _| | || | |_   ___  |  | || |  |_   _|     | || |  |_   _|     | |\n| |  |   \\/   |  | || |      | |     | || |  |   \\ | |   | || |      | |     | || |  |  (__ \\_|  | || |   | |__| |   | || |   | |_  \\_|  | || |    | |       | || |    | |       | |\n| |  | |\\  /| |  | || |      | |     | || |  | |\\ \\| |   | || |      | |     | || |   '.___`-.   | || |   |  __  |   | || |   |  _|  _   | || |    | |   _   | || |    | |   _   | |\n| | _| |_\\/_| |_ | || |     _| |_    | || | _| |_\\   |_  | || |     _| |_    | || |  |`\\____) |  | || |  _| |  | |_  | || |  _| |___/ |  | || |   _| |__/ |  | || |   _| |__/ |  | |\n| ||_____||_____|| || |    |_____|   | || ||_____|\\____| | || |    |_____|   | || |  |_______.'  | || | |____||____| | || | |_________|  | || |  |________|  | || |  |________|  | |\n| |              | || |              | || |              | || |              | || |              | || |              | || |              | || |              | || |              | |\n| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------' \n"
# define GREEN "\e[0;32m"
# define RESET "\e[0m"
# define PINK "\e[0;38;5;199m"
# define BLUE "\e[0;34m"
# define G_BLUE "\e[0;38;5;24m"
# define B_BLUE "\e[1;34m"
# define G_CYAN "\e[0;38;5;44m"

/* CD FILE*/
int		ft_check_file(char *folder);
int		ft_cd_comp(char *str);
void	ft_cd(char *str);

/*PWD FILE*/
char	*ft_pwd(int i);

/*ENV FILE*/
void	ft_env();

/*ECHO FILE*/
int		ft_echo_compare(char *str);
int		ft_echon_compare(char *str);
void	ft_echon(char *str);
void	ft_echo(char *str);

/*EXPORT FILE*/
void	ft_export(void);

/*UTILS FILE*/
int		ft_strcmp(char *str1, char *str2);
int		ft_strlen(char *str);
void	ft_help(void);
void	ft_exit(void);