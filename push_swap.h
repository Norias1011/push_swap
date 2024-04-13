/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:24:32 by akinzeli          #+#    #+#             */
/*   Updated: 2024/04/13 16:08:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./printf/ft_printf.h"
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack_node
{
	int					value;
	int					current_position;
	int					final_index;
	int					push_price;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}						t_stack_node;

/* ft_split functions */

int						nextstep(char c, char charset);
int						words_count(char *str, char charset);
void					words_copy(char *dest, char *src, char charset);
void					split_word(char *str, char charset, char **tab);
char					**ft_split(char const *s, char c);

/* stack_init.c functions */

void					stack_init(t_stack_node **a, char **argv,
							bool flag_argc_2);

/* errors.c functions */

int						error_syntax(char *str_nbr);
void					error_free(t_stack_node **a, char **argv,
							bool flag_argc_2);
void					free_stack(t_stack_node **stack);
void					free_matrix(char **argv);
int						error_repetition(t_stack_node *a, int nbr);

/* stack_utils.c functions */

t_stack_node			*find_last_node(t_stack_node *head);
void					append_node(t_stack_node **stack, int nbr);
t_stack_node			*find_smallest(t_stack_node *stack);
int						stack_len(t_stack_node *stack);
t_stack_node			*return_cheapest(t_stack_node *stack);

/* swap_command.c functions */

void					sa(t_stack_node **a, bool checker);
void					sb(t_stack_node **b, bool checker);
void					ss(t_stack_node **a, t_stack_node **b, bool checker);

/* rotate_command.c functions */

void					ra(t_stack_node **a, bool checker);
void					rb(t_stack_node **b, bool checker);
void					rr(t_stack_node **a, t_stack_node **b, bool checker);

/* reverse_rotate_command.c functions */

void					rra(t_stack_node **a, bool checker);
void					rrb(t_stack_node **b, bool checker);
void					rrr(t_stack_node **a, t_stack_node **b, bool checker);

/* push_command.c functions */

void					pa(t_stack_node **a, t_stack_node **b, bool checker);
void					pb(t_stack_node **b, t_stack_node **a, bool checker);

/* small_sort.c functions */

bool					stack_sorted(t_stack_node *stack);
void					tiny_sort(t_stack_node **a);
void					handle_five(t_stack_node **a, t_stack_node **b);

/* push_swap_command.c functions */

void					finish_rotation(t_stack_node **stack,
							t_stack_node *top_node, char stack_name);
void					push_swap(t_stack_node **a, t_stack_node **b);

/* push_swap_init.c functions */

void					set_current_position(t_stack_node *stack);
void					set_price(t_stack_node *a, t_stack_node *b);
void					set_cheapest(t_stack_node *b);
void					init_nodes(t_stack_node *a, t_stack_node *b);

#endif