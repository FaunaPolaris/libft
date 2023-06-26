/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:25:54 by fpolaris          #+#    #+#             */
/*   Updated: 2023/06/26 17:32:22 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* includes */

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

/* structs */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

/* declarations */

/* converters */
int		ft_atoi(const char *nptr);
char	*ft_itoa(int n);

/* print */
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

int	fp_putnbr_base(int nb, char *base_chars);
int		ft_printf(const char *, ...);
int		fp_putstr_and_len(char *s, int fd);
int		fp_putnbr_and_len(int n, int fd);
int		fp_putpointer(const void *ptr);
int		fp_putnbr_un(unsigned int nb);

/* bonus linked list */
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int		ft_lstsize(t_list *lst);

/* string manipulation */
void	ft_striteri(char *s, void (*f) (unsigned int, char *));
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));
char	*ft_strnew(size_t size);
char	*ft_strtrim(char const *s, char const *set);
char	*fp_strndup(const char *s, int size);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/* memory manipulation */
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);

/* char recognition */
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

/* grid manipulation */
char	**fp_alloc_grid(char **grid, int size);
void	fp_fill_grid(char **grid, int size, char content);

#endif
