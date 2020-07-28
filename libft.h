/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 21:05:26 by wquinoa           #+#    #+#             */
/*   Updated: 2020/07/22 02:37:01 by wquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# define FD_LIMIT 1024
# define BUFFER_SIZE 1

/*
** # include "ft_printf/includes/libftprintf.h"
** Part 1 - Libc functions
*/

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
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
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_putchar_fd(char c, int fd);
int					ft_putstr_fd(char const *s, int fd);
int					ft_putendl_fd(char const *s, int fd);
int					ft_putnbr_fd(int n, int fd);
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
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

/*
** Math & Utility
*/

size_t				ft_sqrt(size_t n);
int					ft_max(int a, int b);
int					ft_isspace(int c);
void				*ft_del(void *content);
int					ft_fput(const char *str, void *s1, void *s2, int fd);
void				ft_swap(void **ptr1, void **ptr2);

/*
** char ** manipulation
*/

size_t				ft_tablen(char **tab);
char				**ft_tabclear(char **tab);
char				**ft_tabmap(char **tab, char *(*f)(const char *));
char				*ft_strjoin_dlm(char *s1, char *s2, char *s3);
char				*ft_join(char **tab, char *dlm);

#endif
