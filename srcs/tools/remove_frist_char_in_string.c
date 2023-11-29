#include "../../includes/minishell.h"

char	*remove_frist_char_in_string(char *str)
{
	int	len;
	char *new;
	int	i;
	int	j;


	i = 1;
	j = 0;
	len = ft_strlen(str);
	new = (char *) malloc(len);
	while (str[i])
		new[j++] = str[i++];
	new[j] = '\0';
	return (new);
}