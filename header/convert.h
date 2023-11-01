#ifndef CONVERT_H
#define CONVERT_H

int		conv_toupper(int c);
int		conv_tolower(int c);

int		conv_atoi(const char *nptr);
unsigned int	conv_atox(const char *nptr);

char		*conv_itoa(int nb, int len, char *news); // Rec
char		*conv_itoa_base(unsigned int nb, int base);

long long int	conv_atoll(const char *nptr);

#endif
