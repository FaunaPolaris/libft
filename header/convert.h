#ifndef CONVERT_H
#define CONVERT_H

// alphabetical convertions

int		conv_toupper(int c);
int		conv_tolower(int c);

// Type convertions
// alpha(str) to integer
int		conv_atoi(const char *nptr);
unsigned int	conv_atox(const char *nptr);
long long int	conv_atoll(const char *nptr);

//integer to alpha(str)
char		*conv_itoa(int nb);
char		*conv_itoa_base(unsigned int nb, int base);


#endif
