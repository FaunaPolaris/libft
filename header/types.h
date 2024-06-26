#ifndef TYPES_H
#define TYPES_H

// integer types

int	int_len(int nb);
int	int_len_base(int nb, int base);

// integer as file descriptor (abstraction)

char	*fd_read_all(int fd);
char	*fd_gnl(int fd);
char	*fd_read_upto(int fd, int c);

// char types

int	char_count(const char *str, int c);

// 	char* (str)

size_t	str_lcat(char *dst, const char *src, size_t size);
size_t	str_lcpy(char *dst, const char *src, size_t size);
size_t	str_len(const char *s);
int		str_cut(char *str, int from, int size);
int		str_comp(char *str1, char *str2);
int		str_ncmp(const char *str1, const char *str2, size_t n);
int		str_comp_upto(char *str1, char *str2, char end);
int		str_is_digit(char *str);
void	str_iteri(char *s, void (*f) (int, char *));
void	str_sub(char *line, int old, int sub);
char	*str_substr(const char *s, unsigned int start, size_t len);
char	*str_padding(char *str, int padding, int c);
char	*str_ndup(const char *s, int size);
char	*str_dup(const char *str);
char	*str_find_str(const char *source, const char *target, size_t len);
char	*str_find_char(const char *s, int c, int jump);
char	*str_rfind_char(const char *s, int c);
char	*str_join(const char *s1, const char *s2, int flag);
char	*str_copy_upto(char *str, int c);
char	**str_split_once(char *str, int separator, int flag);
char	**str_split(const char *str, int c);
char	***str_splitsplit(const char *str, int frst, int scnd);

// void (move to memory managment functions)

int	void_plen(const void *ptr);

#endif
