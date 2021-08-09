/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davirodr <davirodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:11:09 by davirodr          #+#    #+#             */
/*   Updated: 2021/08/03 20:11:10 by davirodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list {
	void			*content;
	struct s_list	*next;
}				t_list;

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
size_t	ft_strlen(const char *s);
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, unsigned long len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);

/*# include "ft_atoi.c"
# include "ft_bzero.c"
# include "ft_calloc.c"
# include "ft_isalnum.c"
# include "ft_isalpha.c"
# include "ft_isascii.c"
# include "ft_isdigit.c"
# include "ft_isprint.c"
# include "ft_itoa.c"
# include "ft_lstadd_back.c"
# include "ft_lstadd_front.c"
# include "ft_lstclear.c"
# include "ft_lstdelone.c"
# include "ft_lstiter.c"
# include "ft_lstlast.c"
# include "ft_lstmap.c"
# include "ft_lstnew.c"
# include "ft_lstsize.c"
# include "ft_memchr.c"
# include "ft_memcmp.c"
# include "ft_memcpy.c"
# include "ft_memmove.c"
# include "ft_memset.c"
# include "ft_putchar_fd.c"
# include "ft_putendl_fd.c"
# include "ft_putnbr_fd.c"
# include "ft_putstr_fd.c"
# include "ft_split.c"
# include "ft_strchr.c"
# include "ft_strdup.c"
# include "ft_striteri.c"
# include "ft_strjoin.c"
# include "ft_strlcat.c"
# include "ft_strlcpy.c"
# include "ft_strlen.c"
# include "ft_strmapi.c"
# include "ft_strncmp.c"
# include "ft_strnstr.c"
# include "ft_strrchr.c"
# include "ft_strtrim.c"
# include "ft_substr.c"
# include "ft_tolower.c"
# include "ft_toupper.c"*/

#endif