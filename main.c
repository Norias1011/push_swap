/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akinzeli <akinzeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:23:41 by akinzeli          #+#    #+#             */
/*   Updated: 2024/04/04 17:59:46 by akinzeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (ac < 2 || (ac == 2 && !av[1][0]))
		return (EXIT_FAILURE);
	else if (ac == 2)
		av = ft_split(av[1], ' ');
	stack_init(&a, av + 1, 2 == ac);
	free_stack(&a);
}
