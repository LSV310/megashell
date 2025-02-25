/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:49:49 by agruet            #+#    #+#             */
/*   Updated: 2025/02/25 12:32:04 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	exit2(t_mini *minishell, int exit_code)
{
	ft_lstclear(&minishell->env, &free_content);
	exit(exit_code);
}
