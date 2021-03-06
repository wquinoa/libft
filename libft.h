/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 21:05:26 by wquinoa           #+#    #+#             */
/*   Updated: 2020/11/14 05:45:28 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# define FD_LIMIT 1024
# define BUFFER_SIZE 32
# define WHITESPACES "\n\r\t\v\f "
# define GC_SIZE 64
# include "ft_printf/includes/libftprintf.h"

/*
** Part 1 - Libc functions
*/

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(char const *s);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *haystack,
							const char *needle, size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
unsigned long long	ft_atoull(const char *str);
int					ft_atoi(const char *str);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(char const *s);

/*
** Part 2 - Additional functions
*/

char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				**ft_strtok(char const *s, char const *set);
char				*find_first_of(char const *str, char const *set);
char				*skip_symbols(char const *str, char const *set);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_putchar_fd(char c, int fd);
int					ft_putstr_fd(char const *s, int fd);
int					ft_putendl_fd(char const *s, int fd);
int					ft_putnbr_fd(int n, int fd);
int					ft_putchar(char c);
int					ft_putstr(char const *s);
int					ft_putendl(char const *s);
int					ft_putnbr(int n);
int					get_next_line(int fd, char **line);

/*
** Bonus part
*/

typedef	struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *elem);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *elem);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

/*
** Binary tree
*/

typedef struct		s_btree
{
	void			*item;
	struct s_btree	*right;
	struct s_btree	*left;
}					t_btree;

t_btree				*tree_create_node(void *item);
void				tree_apply_prefix(t_btree *root, void (*af)(void *));
void				tree_apply_infix(t_btree *root, void (*af)(void *));
void				tree_apply_suffix(t_btree *root, void (*af)(void *));
void				tree_insert_data(t_btree **root, void *item,
									int (*cmp) (void *, void *));
t_btree				*tree_search(t_btree *root, void *item,
									int (*cmp)(void *, void *));

/*
** Math & Utility
*/

size_t				ft_sqrt(size_t n);
int					ft_max(int a, int b);
void				*ft_del(void *content);
int					ft_fput(const char *str, void *s1, void *s2, int fd);
void				ft_put1(const char *str, void *s1);
void				ft_put2(const char *str, void *s1, void *s2);
void				ft_swap(void **ptr1, void **ptr2);
void				*ft_malloc_gc(size_t size);
void				*ft_calloc_gc(size_t nbytes, size_t size);

/*
** char ** manipulation
*/

size_t				ft_tablen(char **tab);
char				**ft_tabclear(char **tab);
char				**ft_tabmap(char **tab, char *(*f)(const char *));
char				*ft_strjoin_dlm(char *s1, char *s2, char *s3);
char				*ft_join(char **tab, char *dlm);

#endif
