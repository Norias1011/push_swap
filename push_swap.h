/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akinzeli <akinzeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:24:32 by akinzeli          #+#    #+#             */
/*   Updated: 2024/04/04 17:53:25 by akinzeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include "../printf/ft_printf.h"
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

static long				ft_atol(const char *str);
void					stack_init(t_stack_node **a, char **argv,
							bool flag_argc_2);

/* errors.c functions */

int						error_syntax(char *str_nbr);
void					error_free(t_stack_node **a, char **argv,
							bool flag_argc_2);
void					free_stack(t_stack_node **stack);
void					free_matrix(char **argv);
int						error_repetition(t_stack_node *a, int nbr);

#endif