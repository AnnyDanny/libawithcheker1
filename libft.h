/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdanylov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:55:08 by gdanylov          #+#    #+#             */
/*   Updated: 2017/11/15 14:55:09 by gdanylov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_print_numbers(void);
void				ft_is_negative(int n);
int					ft_countstrclen(char *str, int c);
void				ft_swap(int *a, int *b);
int					ft_sqrt(int b);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void(*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void(*del)(void*, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int					ft_toupper(int c);
int					ft_tolower(int c);
void				ft_putendl(char const *str);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strtrim(char const *s);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strstr(const char *big, const char *little);
char				**ft_strsplit(char const *s, char c);
char				*ft_strrchr(const char *str, int ch);
char				*ft_strnstr(const char *sbig, const char *little, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strncpy(char *dest, const char *src, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncat(char *dest, const char *app, size_t n);
char				*ft_strmapi(char const *s, char(*f)(unsigned int, char));
char				*ft_strmap(char const *s, char (*f)(char));
size_t				ft_strlen(const char *str);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_striter(char *s, void(*f)(char *));
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strdup(const char *str);
void				ft_strdel(char **as);
char				*ft_strcpy(char *dest, const char *src);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strchr(const char *str, int ch);
char				*ft_strcat(char *dest, const char *app);
void				ft_putstr_fd(char const *str, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
void				ft_putendl_fd(char const *str, int fd);
void				*ft_memset(void *dest, int c, size_t num);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
int					ft_isprint(int ch);
int					ft_isdigit(int ch);
int					ft_isascii(int ch);
int					ft_isalpha(int c);
int					ft_isalnum(int ch);
void				ft_bzero(void *s, size_t n);
int					ft_atoi(const char *str);
void				ft_strclr(char *s);
void				ft_putchar(char c);
void				ft_memdel(void **ap);
void				*ft_memalloc(size_t size);
char				*ft_itoa(int n);

#endif
