/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:36:50 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/28 22:36:50 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo <lumontgo@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:42:32 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/27 22:14:30 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../../includes/minishell.h"

// static int	echo_compare(char *str)
// {
// 	if (str[0] == 'e' && str[1] == 'c' && str[2] == 'h' && str[3] == 'o' && (str[4] == ' ' || str[4] == '\0'))
// 		return (1);
// 	return (0);
// }

// static int	echon_compare(char *str)
// {
// 	int i;

// 	i = 0;
// 	if (str[0] == 'e' && str[1] == 'c' && str[2] == 'h' && str[3] == 'o' && str[4] == ' ')
// 		i = 4;
// 	while(str[i] == ' ')
// 	{
// 		i++;
// 		if (str[i] == '-' && str[i + 1] == 'n')
// 			return (1);
// 	}
// 	return (0);
// }

char *create_new_str(char *str, char *path, t_data *data)
{
	int i;
	char	*new;
	int size;
	int j;
	int d;

	i = 0;
	j = 0;
	size = 0;
	while(data->exprt[i])
	{
		if (strncmp(data->exprt[i], path, ft_strlen(path)) == 0 && data->exprt[i][ft_strlen(path) == '='])
		{
			while(data->exprt[i][size])
				size++;
			new = malloc (sizeof(char) * (size - ft_strlen(path)) + 1);
			d = ft_strlen(path) + 1;
			while(j < size)
			{
				new[j] = data->exprt[i][d];
				j++;
				d++;
			}
		}
		i++;
	}
	free(path);
	new[j] = '\0';
	return (str);
}

char	*temp_path(char *str, t_data *data)//TODO: FIND THE DATA.EXPRT LINE IF NOT JUST PRINT
{
	int i;
	char *temp;
	int end;
	int start;

	i = 0;
	while(str[i])
	{
		if (str[i] == '$')
		{
			i++;
			start = i;
			while(str[i] != ' ')
				i++;
			end = i;
		}
		i++;
	}
	temp = malloc(sizeof(char) * (end - start) + 1);
	i = 0;
	while(start < end)
	{
		temp[i] = str[start];
		start++;
		i++;
	}
	temp[i] = '\0';
	printf("path = %s\n", temp);
	create_new_str(str, temp, data);
	return (str);
}

void	echo(char *str, t_data	*data)//TODO: ADD PATH TO THE ECHO "$PWD" STUFF LIKE THAT
{
	int i;
	int bin;

	bin = 0;
	i = 4;

	temp_path(str, data);
	while(str[i])
	{
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