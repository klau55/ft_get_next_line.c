/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarpilo <nkarpilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:48:37 by nkarpilo          #+#    #+#             */
/*   Updated: 2023/11/27 18:30:55 by nkarpilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	char			*str_buf;
	struct s_list	*next;
}	t_list;

void	dealloc(t_list **list, t_list *clean_node, char *buf);
t_list	*find_last_node(t_list *list);
void	polish_text(t_list **list);
int		len_to_newline(t_list *list);
void	copy_str(t_list *list, char *str);
char	*get_line(t_list *list);

char	*ft_strchr(const char *s, int c);
int		found_newline(t_list *list);
void	append(t_list **list, char *buf);

void	create_list(t_list **list, int fd);
char	*ft_get_next_line(int fd);
int		main(void);
#endif