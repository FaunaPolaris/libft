#ifndef MEMORY_H
# define MEMORY_H

void	*mem_calloc(size_t nmemb, size_t size);

void	mem_bzero(void *s, size_t n);
void	*mem_move(void *dest, const void *src, size_t n);
void	*mem_set(void *s, int c, size_t n);

void	*mem_find(const void *s, int c, size_t n);
void	*mem_cpy(void *dest, const void *src, size_t n);
int	mem_comp(const void *s1, const void *s2, size_t n);

#endif 
