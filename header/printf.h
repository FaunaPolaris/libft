#ifndef PRINTF_H
#define PRINTF_H

int		fp_printf(const char *line, ...);
int		fp_precision(char *flags, va_list args);
int		fp_fill_left(char *flags, va_list args, char fill);
int		fp_fill_right(char *flags, va_list args, char fill);
int		fp_printf_error(char *line);
int		fp_convert(char c, va_list args);
size_t	fp_find_len(char *line);
int		fp_printf_find(char *line, char **buffer, int *memory);

#endif
