/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetre <apetre@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 00:53:31 by apetre            #+#    #+#             */
/*   Updated: 2023/11/27 00:53:31 by apetre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../../includes/minishell.h"

// static size_t   word_count(char *str, enum split)
// {
//     int counter;
    
//     counter = 0;
//     while (*str == ' ' || (*str >= 9 && *str <= 13))
//         str++;
//     while (*str)
//     {
//         if (*str == '\'')
//         {
//             while(1)
//             {
//                 if (*str && *str != '\'')
//                     str++;
//                 if (*str == '\'')
//                 {
//                     counter++;
//                     break ;
//                 }
//                 else if (!*str)
//                     return (ENDING_QUOTE_NOT_FOUND);
//             }
//         }
//         if (*str == '"')
//         {
//             while(1)
//             {
//                 if (*str && *str != '"')
//                     str++;
//                 if (*str == '"')
//                 {
//                     counter++;
//                     break ;
//                 }
//                 else if (!*str)
//                     return (ENDING_QUOTE_NOT_FOUND);
//             }
//         }
//         if (*str == ' ' && *(str + 1))
//             counter++;
//         str++;
//     }
//     return (counter);
// }

// int split_special_chars(char *str, char **new)
// {
//     //char **new;
//     int words;

//     if (word_count(words) < 0)
//         return (new = NULL, words);
// }
