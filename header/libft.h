/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:25:54 by fpolaris          #+#    #+#             */
/*   Updated: 2023/09/11 17:25:59 by fpolaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

/* includes */

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>
# include <math.h>

/* structs */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

/* declarations */

/* converters */
int		fp_atoi(const char *nptr);
char	*fp_itoa(int n);
char	*fp_itoa_base(unsigned int nb, int base);
unsigned int	fp_atox(char *s);

/* print */
int		fp_putchar_fd(char c, int fd);
void	fp_putendl_fd(char *s, int fd);
void	fp_putnbr_fd(int n, int fd);
void	fp_putstr_fd(char *s, int fd);

int	fp_putnbr_base(unsigned int nb, int base, int up);
int		fp_printf(const char *, ...);
int		fp_putstr_and_len(char *s, int fd);
int		fp_putnbr_and_len(int n, int fd);
int		fp_putpointer(const void *ptr);
int		fp_putnbr_un(unsigned int nb);

/* string manipulation */
void	fp_striteri(char *s, void (*f) (unsigned int, char *));
char	*fp_strchr(const char *s, int c);
char	*fp_strdup(const char *s);
char	*fp_substr(char const *s, unsigned int start, size_t len);
char	*fp_strjoin(char const *s1, char const *s2, int free);
char	**fp_split(char const *s, char c);
char	*fp_strnstr(const char *big, const char *little, size_t len);
char	*fp_strrchr(const char *s, int c);
char	*fp_strmapi(char const *s, char (*f) (unsigned int, char));
char	*fp_strnew(size_t size);
char	*fp_strtrim(char const *s, char const *set);
char	*fp_strndup(const char *s, int size);
char	*get_next_line(int fd);
char	*fp_read_all(int fd);
char	*fp_cutstr(char const *s, unsigned int start, size_t len);
size_t	fp_strlen(const char *s);
size_t	fp_strlcat(char *dst, const char *src, size_t size);
size_t	fp_strlcpy(char *dest, const char *src, size_t size);
int		fp_strncmp(const char *s1, const char *s2, size_t n);
void		fp_strcuto(char *str, int x);
void		fp_strsub(char *line, int old, int sub);

/* memory manipulation */
void	*fp_memcpy(void *dest, const void *src, size_t n);
void	*fp_memmove(void *dest, const void *src, size_t n);
void	*fp_memset(void *s, int c, size_t n);
void	*fp_memchr(const void *s, int c, size_t n);
int		fp_memcmp(const void *s1, const void *s2, size_t n);
void	fp_bzero(void *s, size_t n);
void	*fp_calloc(size_t nmemb, size_t size);

/* is and to */
int		fp_tolower(int c);
int		fp_toupper(int c);
int		fp_isalnum(int c);
int		fp_isalpha(int c);
int		fp_isascii(int c);
int		fp_isdigit(int c);
int		fp_isprint(int c);
int		fp_isupper(int c);
int		fp_ishighest(int quantity, ...);
int		fp_islowest(int quantity, ...);
int		fp_compare(int c, int quantity, ...);

/* grid manipulation */
char	**fp_square_grid(char **grid, int size);
char	**fp_rectangle_grid(char **grid, int width, int height);
void	fp_fill_grid(char **grid, int width, int height, char content);
void	fp_border_grid(char **grid, int width, int height, char c);
int		fp_chrs_grid(char ***grid, int x, int y, char target);
int		fp_chrd_grid(char ***grid, int x, int y, char target);
int		fp_griditer(char **grid, void (*fp) (char *, int));
int		fp_gridlen(char **grid);
void		fp_free_grid(char **grid);

/* printf */
int		fp_printf(const char *line, ...);
int		fp_precision(char *flags, va_list args);
int		fp_fill_left(char *flags, va_list args, char fill);
int		fp_fill_right(char *flags, va_list args, char fill);
int		fp_printf_error(char *line);
int		fp_convert(char c, va_list args);
size_t	fp_find_len(char *line);
int		fp_printf_find(char *line, char **buffer, int *memory);

/* math */
double	fp_dlerp(int x, int y, double t);
int	fp_ilerp(int x, int y, double t);
float	fp_flerp(int x, int y, float t);
double	fp_lerpcolor(int cx, int cy, double t);

/* misc */
int	fp_plen(const void *ptr);
	
#endif
