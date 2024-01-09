#ifndef PRINTING_H
# define PRINTING_H

// simple types
// 	char
int	put_char(char c, int fd);
int	put_str(char *s, int fd);
int	put_endl(char *s, int fd);

//	 integer
int	put_nbr(int n, int fd);
int	put_nbr_base(unsigned int nb, int base, int up);

// abstract void values
int	put_pointer(const void *ptr);

// abstract data types
int	put_dll(t_dllist *head, int fd);


#endif
