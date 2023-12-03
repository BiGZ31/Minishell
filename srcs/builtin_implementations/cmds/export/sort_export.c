/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_export.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:55:47 by lumontgo          #+#    #+#             */
/*   Updated: 2023/12/02 16:55:47 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../../../includes/minishell.h"

void swap(char **a, char **b)
{
    char *temp;

	temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(char **arr, int size)
{
    int sorted;
	
	sorted = 0;
    while (!sorted)
    {
        sorted = 1;
        int i = 0;
        while (i < size - 1)
        {
            if (ft_strncmp(arr[i], arr[i + 1], ft_strlen(arr[1])) > 0)
            {
                swap(&arr[i], &arr[i + 1]);
                sorted = 0;
            }
            i++;
        }
        size--;
    }
}

void	free_exprt(char **exprt, int size)
{
	int	i;

	i = 0;
    while (i < size)
    {
        free(exprt[i]);
        i++;
    }
    free(exprt);
}

void    create_export(t_data *data, char **envp)
{
    int i;
    int size;

    size = 0;
    i = 0;
    while(envp[size])
        size++;
    data->exprt = malloc(sizeof(char *) * 100);
    while (envp[i])
    {
        data->exprt[i] = ft_strdup(envp[i]);
        i++;
    }
    bubbleSort(data->exprt, size);
    data->export_size = i;
}