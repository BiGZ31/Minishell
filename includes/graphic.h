/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphic.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:55:47 by lumontgo          #+#    #+#             */
/*   Updated: 2023/12/02 16:55:47 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define BRAIN "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⡿⠿⠿⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⣿⣿⣿⣿⣿⡿⠛⠉⠀⠀⠀⠹⣧⣀⣠⡄⠀⠀⢸⡯⠈⠙⠻⢿⣿⣿⣿⣿⣿⣿\n⣿⣿⣿⣿⡇⠀⠀⠀⠘⢻⣦⠀⠈⠉⠉⢀⣀⣀⡼⠃⢠⣄⠀⠀⠉⢻⣿⣿⣿⣿\n⣿⣿⡏⠈⠳⣦⣶⠀⠀⢠⡿⠀⠀⢠⡾⠛⠛⠉⠁⠀⢸⣇⡀⠀⣀⡼⠋⢻⣿⣿\n⣿⣿⡇⠀⠀⠀⠀⣀⣴⠟⠁⠀⠀⣿⠁⠀⠀⠤⣤⡀⠀⠉⠛⠛⠋⠀⠀⠀⢹⣿\n⣿⠋⠛⠻⠿⠟⠛⠋⠁⠀⠀⠀⠀⠹⣧⣀⠀⠀⠈⢻⡆⠀⠀⣀⣠⡀⠀⠀⠀⣿\n⣿⡇⠀⠀⢀⣤⣤⠄⠀⠀⠀⠀⠀⠀⠈⠙⠃⠀⠀⣼⠇⠀⣼⡏⠉⠁⠀⠀⢠⣿\n⣿⣿⡀⢰⡟⠁⠀⠀⢀⣴⠟⠻⢶⡄⠀⠀⢀⣠⣾⣿⣤⣤⣿⣧⣀⣀⣀⣴⣿⣿\n⣿⣿⣿⣾⣧⡀⠀⠀⠈⠛⠀⠀⣨⣿⠶⠚⠋⠉⢉⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⣿⣿⣿⣿⠛⠿⢶⣤⣤⣴⠶⠟⠋⣀⡀⠀⣀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⣿⣿⣿⣿⣷⣄⡀⠀⠀⠀⠀⢀⣴⠟⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠛⢁⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"
# define MINISHELL " .----------------.  .----------------.  .-----------------. .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------. \n| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n| | ____    ____ | || |     _____    | || | ____  _____  | || |     _____    | || |    _______   | || |  ____  ____  | || |  _________   | || |   _____      | || |   _____      | |\n| ||_   \\  /   _|| || |    |_   _|   | || ||_   \\|_   _| | || |    |_   _|   | || |   /  ___  |  | || | |_   ||   _| | || | |_   ___  |  | || |  |_   _|     | || |  |_   _|     | |\n| |  |   \\/   |  | || |      | |     | || |  |   \\ | |   | || |      | |     | || |  |  (__ \\_|  | || |   | |__| |   | || |   | |_  \\_|  | || |    | |       | || |    | |       | |\n| |  | |\\  /| |  | || |      | |     | || |  | |\\ \\| |   | || |      | |     | || |   '.___`-.   | || |   |  __  |   | || |   |  _|  _   | || |    | |   _   | || |    | |   _   | |\n| | _| |_\\/_| |_ | || |     _| |_    | || | _| |_\\   |_  | || |     _| |_    | || |  |`\\____) |  | || |  _| |  | |_  | || |  _| |___/ |  | || |   _| |__/ |  | || |   _| |__/ |  | |\n| ||_____||_____|| || |    |_____|   | || ||_____|\\____| | || |    |_____|   | || |  |_______.'  | || | |____||____| | || | |_________|  | || |  |________|  | || |  |________|  | |\n| |              | || |              | || |              | || |              | || |              | || |              | || |              | || |              | || |              | |\n| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------' \n"
# define GREEN "\e[0;32m"
# define RESET "\e[0m"
# define PINK "\e[0;38;5;199m"
# define BLUE "\e[0;34m"
# define G_BLUE "\e[0;38;5;24m"
# define RED "\033[91m"
# define YELLOW "\033[1;33m"
# define B_BLUE "\e[1;34m"
# define G_CYAN "\e[0;38;5;44m"
# define KAWAII "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠖⢲⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠤⠖⠒⠛⠉⠉⠉⠛⠻⢦⡀⠈⡇⠀⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⢀⡤⠞⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠦⣿⠀⡏⡬⣍⣲⡤⠤⠤⠤⠤⠤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀\n⢀⡤⠖⠚⢉⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡄⡧⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠦⣀⠀⠀⠀⠀⠀\n⠙⣷⠅⢀⡎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⢀⠀⠀⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⠤⠤⢄⣀\n⠀⠘⣦⣸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢾⣿⠋⠀⠠⡇⠀⡾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢱⡈⡆⡟\n⠀⠀⠈⡏⠀⠀⠀⠀⠀⠀⠠⣿⣷⠀⠰⡏⢻⠉⠀⢸⡀⠀⠀⡇⠀⢹⣿⢆⢀⡀⠀⠀⠀⠀⢠⡀⠀⠀⠀⠀⠀⠟⡼⠁\n⠀⠀⠀⣧⠀⠀⠀⠀⠀⠀⠀⠉⠉⠀⠀⠸⣸⡆⠀⠀⠁⠀⠀⡇⠀⢰⡇⠈⠉⠛⠂⠸⣿⠆⠈⠁⠀⠀⠀⠀⠀⡟⠀⠀\n⠀⠀⠀⢸⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠁⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡇⠀⠀\n⠀⠀⠀⠀⢿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡴⠢⠧⠤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀\n⠀⠀⠀⠀⠀⠛⠿⣦⣀⣀⣠⣤⣤⠖⠀⠀⠀⠀⠀⠐⢦⣳⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠇⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⣰⡿⠃⠀⠀⠀⠀⠀⠀⢢⠀⠈⠉⢻⡗⠂⠀⠀⠀⠀⠀⠀⠙⠲⣶⠦⠤⠔⠚⠁⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣻⠁⠀⠀⠀⠀⠀⠀⠀⠈⣉⣙⠚⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢦⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢱⡟⠲⡴⠒⠲⠆⠀⠀⠀⠀⠀⠀⠈⡇⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⢀⡞⠻⡄⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠛⠢⡸⠁⠀⠀⠀⠀⠀⠀⠀⠀⡀⡸⠻⡀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠈⢷⣄⠙⠚⠛⢳⡤⣦⣄⣰⣴⠶⠶⠴⠶⠼⠷⠶⠤⠤⠤⠤⠤⠦⢴⡋⠉⠁⣰⠃⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠓⠒⠚⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀\n"
# define kaw "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣤⣤⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣶⣿⠟⠉⠉⠻⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣾⠿⠉⠀⠀⠀⠀⠀⠹⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣾\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣾⡿⠛⠉\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣾⡿⠟⠁⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣴⣿⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣷⣶⣶⣦⣤⣤⣄⣤⡀⣀⣩⣾⣿⠿⠋⠀⠀⠀⠀⠀⣠\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⣿⣿⣿⠟⠋⠉⠉⠙⣿⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀⠀⢀⡾⠁\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⠁⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⡟⠁⠀⠀⠀⢀⣴⣿⣿⣿⣿⡏⠋⠀⠀⠀⠀⠀⠀⠀⡞⠋⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣼⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⡏⠀⠀⠀⠀⣶⣿⣿⣿⣿⡿⠉⠀⠀⠀⠀⠀⠀⠀⠀⢸⡯⠤⣤\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣿⣿⣿⡏⠀⠀⠀⠀⣼⣿⣿⣿⣿⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡾⠁\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣄⣄⣼⣿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⡿⠋⠀⠀⠀⠀⣼⣿⣿⣿⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢷⣄\n⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⠀⠀⠀⠀⣾⣿⣿⣿⡿⠁⠀⠀⠀⠀⠀⠀⣠⣶⣶⣶⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠿⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻\n⠀⠀⠀⠀⠀⠀⢀⣾⠿⠛⢿⣿⣷⣄⡀⣿⠋⠀⠈⠀⠀⠀⠀⠀⠀⢀⣾⡏⠀⢹⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⣠⣤⣦⣼⣿⠀⠀⠀⣿⣿⣿⣿⣿⣦⣀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⡿⠀⠀⠀⢀⣀⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⣾⣿⣿⣿⢷⣄⠀⠀⠀⠀⠀⠀⠀\n⠀⣠⣾⡿⠋⠉⠉⠁⠀⠀⠀⠀⠉⢯⡙⠻⣿⣿⣷⣤⡀⠀⠀⠀⠀⢿⣿⣿⣿⣿⡿⠃⢀⡤⠖⠋⣉⣉⣉⣉⠉⠉⠒⠦⣄⠀⠀⠀⢔⡟⡿⠟⠉⣟⣻⣮⣿⠀⠀⠀⠀⠀⠀⠀⠀\n⣾⣿⠋⠀⠀⠀⠀⣀⣀⡀⠀⠀⠀⠀⠙⢦⣄⠉⠻⢿⣿⣷⣦⡀⠀⠈⠙⠛⠛⠋⠀⢰⠟⡇⠀⠀⠈⠻⡿⠛⠁⠀⠀⠀⠈⠳⣄⠀⠸⣧⣿⣿⣿⣿⣿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀\n⣿⡇⠀⠀⠀⣴⠙⣩⣿⣿⣄⠀⠀⠀⠀⡶⢌⡙⠶⣤⡈⠛⠿⣿⣷⣦⣀⠀⠀⠀⠀⡇⠀⢻⣄⠀⠀⣠⢷⠀⠀⠀⠀⠀⡶⠀⠘⡆⠀⠀⠻⣿⣿⣿⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀\n⣿⡇⠀⠀⢸⣇⢸⣿⣿⣿⣿⠀⠀⠀⠀⡇⠀⠈⠛⠦⣝⡳⢤⣈⠛⠻⣿⣷⣦⣀⠀⠀⠀⠀⠈⠙⠋⠁⠀⠛⠦⢤⡤⠞⠃⠀⠀⢳⠀⠀⠀⠈⠋⠙⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⣿⡇⠀⠀⠈⢿⣄⣿⣿⣿⠏⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠙⠳⢬⣛⠦⠀⠙⢻⣿⣷⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⣿⡇⠀⠀⠀⠀⠉⠛⠋⠁⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠈⣿⠉⢻⣿⣷⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⣿⡇⠀⠀⠀⠀⠀⣠⣄⠀⠀⢰⠶⠒⠒⢧⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⢸⡇⢸⡟⢿⣷⣦⣴⣶⣶⣶⣶⣤⣔⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⣿⡇⠀⠀⣤⠀⠀⠿⠿⠁⢀⡿⠀⠀⠀⡄⠈⠙⡷⢦⣄⡀⠀⠀⠀⠀⠀⠀⠀⣿⠀⢸⡇⢸⡇⠀⣿⠙⣿⣿⣉⠉⠙⠿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⣿⡇⠀⠀⠙⠷⢤⣀⣠⠴⠛⠁⠀⠀⠀⠇⠀⠀⡇⢸⡏⢹⡷⢦⣄⡀⠀⠀⠀⣿⡀⢸⡇⢸⡇⠀⡟⠀⢸⠀⢹⡷⢦⣄⣘⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⣿⣿⠢⣤⡀⠀⠀⠀⠀⠀⠀⣠⠾⣿⣿⡷⣤⣀⡇⠸⡇⢸⡇⢸⠉⠙⠳⢦⣄⡻⢿⣾⣧⣸⣧⠀⡇⠀⢹⡀⢸⡇⢤⣈⠙⠻⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⢹⣿⣷⣌⡉⠛⠲⢶⣶⠖⠛⠛⢶⣄⡉⠛⠿⣽⣿⣶⣧⣸⡇⢸⠀⠀⠀⠀⠈⠙⠲⢮⣝⠻⣿⣷⣷⣄⣼⠀⢸⡇⠀⠈⠁⠀⢸⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠈⠙⠻⢿⣷⣶⣤⣉⡻⢶⣄⣀⠈⠙⠳⢦⣈⡉⠻⢿⣿⣷⣾⣦⡀⠀⠀⠀⠀⠀⠀⠈⠙⠲⢭⣛⠿⣿⣷⣼⡇⠀⠀⠀⠀⠈⣿⡇⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⣠\n⠀⠀⠀⠀⠀⠈⠙⠻⢿⣿⣷⣶⣽⣻⡦⠀⠀⠈⠙⠷⣦⣌⡙⠻⢿⣟⣷⣤⣀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠳⢯⣻⡇⠀⠀⠀⠀⠀⢸⣿⠀⣀⠀⠀⠀⠀⠈⠳⣄⡀⠀⠀⢀⣏⡟⠛\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠻⢿⣿⣿⣿⣶⣤⣤⣤⣀⣈⠛⠷⣤⣈⡛⠷⢽⡻⢶⣄⣀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠳⢤⣀⠀⠀⢸⣿⡀⠈⠻⢭⣲⣴⣴⠗⠋⠛⠶⠿⠿⠃⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⣿⡿⠛⠉⠙⠛⠛⠻⢷⣦⣄⣩⣿⠶⠖⠛⠛⠛⠛⠛⠛⠿⢷⣶⣦⣄⠀⠀⠀⠀⠉⢻⣶⣿⣿⠇⠀⠀⠀⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⠁⠀⠀⠀⠀⠀⠀⠀⣿⣿⠋⠀⠀⠀⠀⢀⣠⡶⠂⠀⠀⠀⠈⠙⠿⣿⣦⡄⠀⠀⣸⣿⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⣴⠏⠁⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⢿⣶⣄⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⢸⣧⠀⠀⢀⡾⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠙⢿⣿⣇⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡿⠿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡿⠦⠠⠋⠀⠀⠀⠀⠀⢀⡶⠂⠀⠀⠀⠀⠀⠀⠧⠤⠄⠙⡿⠿⠦⠤⠤⠤⠤⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n"
# define FIRST "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣴⣶⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⣀⣀⣀⣤⣤⡄⠀⠀⣀⣠⣤⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠒⠒⠒⠒⠒⠚⢻⣿⣿⣿⣿⣿⣿⣿⣿⡛⢉⣧⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣷⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⢟⣼⣿⣿⣏⢪⣾⣿⣿⢯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⣿⣿⣿⣿⣿⣿⡇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢹⣟⢿⣿⣿⣿⣧⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⣿⣿⣿⣿⣿⣿⡇⣿⣦⠙⠛⣿⣿⣼⣿⣿⣿⣿⣿⣿⡿⢿⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⢻⣿⣇⣿⣿⣿⣿⣿⣿⣿⣾⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠋⣰⣿⣿⣿⣿⣿⣿⣿⣿⠧⠤⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣄⠀⠀⠀⠀⠀\n⠀⠀⠀⢠⡠⠤⠤⠈⠭⠏⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⡳⠚⠉⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠸⣿⣿⣿⡇⠹⣿⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡀⠀⠀⠀\n⠠⢶⠴⠶⣶⣶⣶⢶⠶⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⣿⣿⣿⠃⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀\n⠀⠀⠀⡀⢀⣀⡀⣠⣤⣼⣿⣿⣿⣿⣿⣿⣿⣿⡏⠀⠀⠀⠀⢻⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⣿⣿⡟⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⣏⣈⣿⣿⣿⣿⣿⣿⣿⣿⣧⣴⣶⣤⡙⠾⣿⣿⣿⣿⣿⠀⠀⢀⡤⣖⣿⣾⣿⠿⣶⣤⡸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⣿⢭⣽⣿⣿⣿⣿⣿⣿⢾⣿⣿⣹⣿⡿⣦⠘⠛⢿⣿⣿⠀⠀⠀⢠⣿⣩⣿⣿⣷⡀⠛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣿⣿⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠟⣿⣿⣿⣿⣿⣿⡈⠉⢻⣿⣿⣧⠀⠀⠀⠀⠙⣿⠀⠀⠀⠀⢿⣿⣿⡿⣿⠇⢀⠟⠸⣿⣿⣿⣿⣿⣿⣿⠟⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⣌⢻⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢻⣿⣿⣿⣿⣿⡇⠀⠀⠻⠿⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠛⠻⠷⠏⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⠀⠀⢿⣿⣿⠟⢹⣿⣿⣿⣿⣿⣿⣼⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⠇⠀⠀⢸⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⡏⠀⠀⢸⡿⠋⠀⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀\n⠀⠀⠀⠀⠀⠀⠀⠀⣇⣀⣄⣨⣿⣿⣿⣿⣿⣿                       ⣿⣿⣿⣿⣿⣿⣿⡿ ⢀⡞⠁  ⣿⣿⣿⣿⣿⣿⣿⡇  \n"
# define SECOND "⠀⠀⠀⠀⠀⠀⠀⠀⣭⠄⢤⣼⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⡏⣠⡴⠯⠤⠶⠶⣶⣿⣿⣿⣿⣿⣿⣿⣷⡄⣄\n⢀⠀⠀⠀⠀⠀⠀⡀⣧⣤⣦⣿⣿⣿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⡁⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⢻⡇⣷\n⠀⣀⡀⠰⡶⠀⠀⡄⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣀⠀⠀⠀⡴⣣⠟⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣿⣶⣷⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿\n⠀⡙⢺⣶⣶⣶⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣾⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠶⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⣴⢀⠄⠀⣿⣿⣿⣿⣿⣿⣿⣿⠀⣿⣿\n⠘⣷⡖⣿⡟⢛⢩⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢡⣾⣿⣦⣀⠀⠀⠀⠀⠀⠀⣀⣠⠴⠚⠋⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢈⡀⠀⠰⣿⣿⣿⣿⣿⣿⣿⣿⠀⢸⣿\n⢠⣿⠇⣿⣿⠘⣼⣿⣿⣿⣿⣿⣿⠟⢛⣛⠉⢉⢽⠉⠻⣴⣿⣿⣿⣿⡝⣷⣖⠒⣶⠚⠋⠉⠀⠀⠀⠀⣠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣩⠁⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⣿\n⠶⠁⠀⣿⡧⣴⣿⣿⣿⣿⣿⡟⡵⠚⠉⢩⣷⠋⠈⣴⢠⡞⠙⢿⣿⣿⣷⣮⣿⣿⠋⣧⠀⠀⠀⠀⣠⠞⠁⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣈⣄⡀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣷⠠⣿\n⠀⠀⠀⣿⡇⠹⣿⣿⣿⣿⡟⡽⠉⠁⠀⢎⡿⠐⠶⣷⡏⠀⠀⣠⣿⣿⣿⣿⣿⡏⠀⠸⣆⢀⣠⠞⠁⠀⠀⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣦⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣿\n⠀⠀⠀⣹⡇⠀⠀⠉⣙⣿⣥⡴⠖⠰⣠⠏⠀⠀⠀⠀⠉⠓⣰⣿⣿⣿⣿⣿⣿⠃⠀⢠⣾⣯⣅⡀⠀⠀⠈⠁⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⠀⠀⠀⣽⣷⣤⠶⠾⠋⠁⣻⠧⣴⡿⠿⣟⡢⣄⡀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⢀⣴⣿⣿⣿⣿⣿⣆⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⣴⣶⣾⠟⠋⠀⠀⠀⢀⣴⣿⣾⣿⠁⠀⣄⠙⠒⢫⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡄⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⠋⠁⠀⠀⠀⢀⡤⢶⣿⣿⠁⢀⣿⡇⠀⣌⡑⠒⢺⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⠏⢾⣿⣿⡿⣧⠙⣦⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⠀⠀⠀⠀⢰⣏⣀⣀⣤⠤⢤⣈⣉⠁⣸⢸⢱⢦⡏⣹⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣼⣿⠀⢸⣿⢿⣿⣿⣆⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⠀⠀⠀⠀⣾⠻⢦⣄⣀⢀⣦⡬⣿⣽⡉⠃⠾⡼⠾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⢸⣿⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n⠀⠀⠀⣴⠃⠀⠀⠙⠻⢿⣝⣧⡀⠙⣿⣿⣼⣤⣾⣿⣿⣿⣿⣿⣿⣿⡿⢿⣿⣿⣿⡇⠳⢸⣿⣇⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n"