/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:32:24 by agruet            #+#    #+#             */
/*   Updated: 2025/03/12 11:44:02 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "libft.h"
# include "arena.h"
# include "lexer.h"
# include "parser.h"
# include "pipex.h"
# include "wildcards.h"
# include <stdio.h>
# include <stdbool.h>
# include <signal.h>

typedef struct s_mini
{
	t_map	*env;
	t_dlist	*history;
}	t_mini;

// builtins
int		cd(t_map *env, char *dir);
int		echo(char **args);
int		env(t_map *env);
int		exit2(t_mini *minishell, int int_code, char *char_code);
int		export(t_map *env, char *var);
int		pwd(void);
int		unset(t_map *env, char *var);

// env
int		create_env(t_mini *minishell);
int		assign_kv(char *var, t_map *map);
t_map	*get_env(t_map *env, const char *var, size_t len);
t_map	*add_env_var(t_map *env, char *key, char *value);
char	**convert_env(t_map *map);

// lexer
int		expend_token(t_token *tok, t_arena *arena, t_mini *env);
t_list	*make_tokens(const char	*line_read, t_arena *arena, t_mini *env);
int		expend_token_list(t_list *tks, t_arena *arena, t_mini *env);

// pipex
int		pipex(t_cmd **cmds, t_mini *mini);

// signals
void	create_signals(void);

#endif
