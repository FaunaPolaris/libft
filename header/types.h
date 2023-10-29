#ifndef TYPES_H
#define TYPES_H

// int

int	int_len(int nb);

// int fd

char	*fd_read_all(int fd);

// char

int	char_count(const char *str, int c);

// char* (str)

int	str_cut(char *str, int from, int size);
int	str_comp(char *str1, char *str2);
int	str_is_digit(char *str);
void	str_iteri(char *s, void (*f) (int, char *);
char	*str_search(const char *s, int c);
char	*str_join(const char *s1, const char *s2, int flag);
char	*str_dup(const char *str);
char	*str_copy_upto(char *str, int c);
char	**str_split(const char *str, int c);
char	***str_splitsplit(const char *str, int frst, int scnd);

// void

int	void_plen(const void *ptr);

#endif
