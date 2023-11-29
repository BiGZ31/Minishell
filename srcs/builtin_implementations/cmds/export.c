/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_export.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:42:32 by lumontgo          #+#    #+#             */
/*   Updated: 2023/11/26 19:42:32 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/minishell.h"

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

void export(char **envp)
{
    char **exprt;
    int i;
    int size;

    i = 0;
    size = 0;
    while (envp[size])
        size++;
    exprt = malloc(sizeof(char *) * 100);
    while (envp[i])
    {
        exprt[i] = ft_strdup(envp[i]);
        i++;
    }
    bubbleSort(exprt, size);
    i = 0;
    while (exprt[i])
    {
        printf("%s\n", exprt[i]);
        i++;
    }
	free_exprt(exprt, size);
}




	// while(envp[i])
	// {
	// 	j = 0;
	// 	while(envp[i][j] == envp[i + 1][j])
	// 		j++;
	// 	if (envp[i][j] > envp[i + 1][j])
	// 		ft_swap
	// }

// sort ENV en ordre ascii 
// puis rajouter export test=eiuhfie
//