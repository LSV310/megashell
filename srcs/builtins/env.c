/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agruet <agruet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:53:37 by agruet            #+#    #+#             */
/*   Updated: 2025/02/25 11:16:10 by agruet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	env(t_mini *minishell)
{
	t_list	*current;

	if (!minishell->env)
		return (1);
	current = minishell->env;
	while (current)
	{
		ft_printf("%s\n", (char *)current->content);
		current = current->next;
	}
	return (0);
}
