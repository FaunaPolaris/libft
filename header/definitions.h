#ifndef DEFINITIONS_H
# define DEFINITIONS_H

// file descriptor manipulation

# define BUFFER_SIZE 1000

// boolean logic

# define TRUE 1
# define FALSE 0

// mathematical limits

# define HIGHEST_SQRT 46341
# define PRECISION 0.001

// mathematical formulas
#define BUTTERFLY_X(t) (85 *(sin(t) * ((exp(cos(t)) - (2 * cos(4 * t)) - (pow(sin(t / 12), 5))))))
#define BUTTERFLY_Y(t) (-85 *(cos(t) * ((exp(cos(t)) - (2 * cos(4 * t)) - (pow(sin(t / 12), 5))))))

// keycodes

# define KEY_Q 113
# define KEY_E 101
# define KEY_A 97
# define KEY_D 100
# define KEY_W 119
# define KEY_S 115
# define KEY_ESC 65307

// screen size

# define WIDTH 1280
# define HEIGHT 720

// colors

# define RED			0xFF0000
# define GREEN			0x00FF00
# define LIGHT_GREEN	0x90EE90
# define BLUE			0x0000FF
# define LIGHT_BLUE		0xADD8E6
# define WHITE			0xFFFFFF
# define BLACK			0x000000

#endif
