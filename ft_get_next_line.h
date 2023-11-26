#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

//# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
    char            *str_buf;
    struct s_list   *next;
}   t_list;

#endif