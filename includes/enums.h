/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enums.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 09:05:13 by lumontgo          #+#    #+#             */
/*   Updated: 2023/12/03 13:39:42 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENUMS_H
# define ENUMS_H

enum	builtin
{
	IS_A_BUILTIN,
	IS_NOT_A_BUILTIN
};

enum	export
{
	HAS_ARG,
	HAS_NO_ARG
};

enum	export_arg
{
	ARG_HAS_EQUAL,
	ARG_HAS_NO_EQUAL
};

enum	export_brackets
{
	ARG_HAS_BRACKETS,
	ARG_HAS_NO_BRACKETS
};

enum	export_variable_check
{
	VAR_EXISTS,
	VAR_DOES_NOT_EXIST,
};

enum	access
{
	FAIL = -1,
	FOUND_BINARY
};



#endif