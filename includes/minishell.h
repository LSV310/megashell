/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgallet <tgallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:32:24 by agruet            #+#    #+#             */
/*   Updated: 2025/02/24 19:48:23 by tgallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "libft.h"
# include "lexer.h"
# include "pipex.h"
# include "builtins.h"
# include <unistd.h>
# include <stdio.h>
# include <stdbool.h>

int			ft_isspace(char c);
int			char_in_set(char c, const char *set);
const char	*get_env_variable(char *key, void *env);
typedef struct s_kv
{
	char	*key;
	char	*value;
}	t_kv;

#endif
