/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 18:34:15 by vbeffa            #+#    #+#             */
/*   Updated: 2021/04/28 18:34:19 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_callother(char *line, t_heads *heads)
{
	if (!ft_strcmp(line, "ss"))
	{
		ft_swap(&heads->head_a);
		ft_swap(&heads->head_b);
	}
	else if (!ft_strcmp(line, "rrr"))
	{
		ft_reverse_r(&heads->head_a);
		ft_reverse_r(&heads->head_b);
	}
	else if (!ft_strcmp(line, "rr"))
	{
		ft_rotate(&heads->head_a);
		ft_rotate(&heads->head_b);
	}
}

void	ft_parseline(char *line, t_heads *heads)
{
	if (!ft_strcmp(line, "rra"))
		ft_reverse_r(&heads->head_a);
	else if (!ft_strcmp(line, "rrb"))
		ft_reverse_r(&heads->head_b);
	else if (!ft_strcmp(line, "rrr"))
		ft_callother(line, heads);
	else if (!ft_strcmp(line, "sa"))
		ft_swap(&heads->head_a);
	else if (!ft_strcmp(line, "sb"))
		ft_swap(&heads->head_b);
	else if (!ft_strcmp(line, "ss"))
		ft_callother(line, heads);
	else if (!ft_strcmp(line, "pa"))
		ft_push(&heads->head_a, &heads->head_b);
	else if (!ft_strcmp(line, "pb"))
		ft_push(&heads->head_b, &heads->head_a);
	else if (!ft_strcmp(line, "ra"))
		ft_rotate(&heads->head_a);
	else if (!ft_strcmp(line, "rb"))
		ft_rotate(&heads->head_b);
	else if (!ft_strcmp(line, "rr"))
		ft_callother(line, heads);
	else
		ft_error();
	free(line);
}
